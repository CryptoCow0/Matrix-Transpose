// take an n by m matrix and tranpose it to be m by n
console.log("Enter your matrix row by row seperated by spaces and each row by a new line: ");
const prompt=require("prompt-sync")({sigint:true}); 

let UserInput = prompt();
const Matrix = []
while(UserInput !== 'done'){
   // console.log(UserInput);
    //add the value into an array?
    Matrix.push(UserInput);
    UserInput = prompt();
    //console.log(Matrix[0][0])
}


//console.log(UserInput);

// Iterate through UserInput

//console.log(Matrix);
const FinalMatrix = [];
for(let i = 0; i < Matrix[0].length; i++){
    let row = [];
    for (let j = 0; j < Matrix.length;j++){
        //console.log(UserInput[i]);
         if (Matrix[j][i] !== " "){
            row.push(Matrix[j][i]);
            //console.log(Matrix[j][i]);
        }

    }
    FinalMatrix.push(row);
    
}

FinalMatrix.forEach(function(row){
    row.forEach(function(element){
        console.log(element);
    });

});
console.log(`Your final Matrix is: ${FinalMatrix}`);