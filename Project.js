// 1. deposit some money
// 2. determine no . of lines
// 3. collect a bet amt
// 4. spin the slot machine
// 5. check if he won
// 6. give user his winnings
// 7. if not keep all the money
// 8. play again?
//   node Project.js
const prompt = require("prompt-sync")();
const ROWS = 3;
const COLS = 3;

const SYMBOL_COUNT = {
  A: 2,
  B: 4,
  C: 6,
  D: 8,
};

const SYMBOL_VALUES = {
  A: 8,
  B: 6,
  C: 4,
  D: 2,
};

const deposit = () => {
  while (true) {
    const depositAmount = prompt("Enter a deposit amount : ");
    const numberDepositamount = parseFloat(depositAmount);
    //   parse float will convert the string into an integer
    // if we convert "hello" then it will give NaN (not a number)
    if (isNaN(numberDepositamount) || numberDepositamount <= 0) {
      console.log("Invalid deposit amount , try again ");
    } else {
      return numberDepositamount;
    }
    // isNaN is a function which check whether it a No . or not
  }
};

const getNuofLines = () => {
  while (true) {
    const lines = prompt("Enter the no. of lines (1-3) : ");
    const numberlines = parseFloat(lines);
    //   parse float will convert the string into an integer
    // if we convert "hello" then it will give NaN (not a number)
    if (isNaN(numberlines) || numberlines <= 0 || numberlines > 3) {
      console.log("Invalid deposit amount , try again ");
    } else {
      return numberlines;
    }
    // isNaN is a function which check whether it a No . or not
  }
};

const getBet = (balance, lines) => {
  while (true) {
    const betamt = prompt("Enter the bet amount per line: ");
    const bet = parseFloat(betamt);
    //   parse float will convert the string into an integer
    // if we convert "hello" then it will give NaN (not a number)
    if (isNaN(bet) || bet <= 0 || bet > balance / lines) {
      console.log("Invalid bet/ exceeds the balance , try again ");
    } else {
      return bet;
    }
    // isNaN is a function which check whether it a No . or not
  }
};

const spin = () => {
  const symbols = [];
  //   each symbol will be pushed in reels for the No of time it has count of
  //   object entries funtion will send objects one by one
  //   the for loop going to count will push the Elements
  for (const [symbol, count] of Object.entries(SYMBOL_COUNT)) {
    for (let i = 0; i < count; i++) {
      symbols.push(symbol);
    }
  }

  const reels = [];
  for (let i = 0; i < COLS; i++) {
    reels.push([]);
    const reelSymbols = [...symbols]; //this the set from which we will pick the symbols to insert in the reels;
    for (let j = 0; j < ROWS; j++) {
      const randomIndex = Math.floor(Math.random() * reelSymbols.length);
      const selectedSymbol = reelSymbols[randomIndex];
      reels[i].push(selectedSymbol);
      //   splice is used because we dont want to push the value that is in the array agian so we deleted it;
      reelSymbols.splice(randomIndex, 1);
    }
  }
  return reels;
};

const transpose = (reels) => {
  const rows = [];
  for (let i = 0; i < ROWS; i++) {
    rows.push([]);
    for (let j = 0; j < COLS; j++) {
      // imagine like 0,0; 1,0; 2,0; 0,1; 1,1; 2,1; 0,2; 1,2; 2,2;
      rows[i].push(reels[j][i]);
    }
  }
  return rows;
};

const printRows = (rows) => {
  for (const row of rows) {
    let rowString = "";
    for (const [i, symbol] of row.entries()) {
      rowString += symbol;
      if (i != row.length - 1) {
        rowString += " | ";
      }
    }
    console.log(rowString);
  }
};

const getWinnings = (rows, bet, lines) => {
  let winnings = 0;

  for (let row = 0; row < lines; row++) {
    const symbols = rows[row];
    let allSame = true;

    for (const symbol of symbols) {
      if (symbol != symbols[0]) {
        allSame = false;
        break;
      }
    }

    if (allSame) {
      winnings += bet * SYMBOL_VALUES[symbols[0]];
    }
  }

  return winnings;
};
const game = () => {
  let balance = deposit();
  while(true){
    console.log("You have a balance of Rs. "+ balance);
    const numberoflines = getNuofLines();
    const betamt = getBet(balance, numberoflines);
    balance -= betamt*numberoflines;
    const reels = spin();
    const rows = transpose(reels);
    printRows(rows);
    const winnings = getWinnings(rows, betamt, numberoflines);
    console.log("you won , Rs. " + winnings.toString());
    if (balance <1){
      console.log("You ran out of money : ");
      break;
    }
    const playAgain = prompt("Do you want to play again (y/n)?");
    if (playAgain!="y") break;
  }
};
game();