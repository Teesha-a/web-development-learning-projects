function add(num1,num2){
    return num1+num2;
}
function multiply(num1,num2){
    return num1*num2;
}
function subtract(num1,num2){
    if(num1<num2) return num2-num1;
    return num1-num2;
}
function divide(num1,num2){
    if(num1<num2) return num2/num1;
    return num1/num2;
}
function calculator(num1,num2,operator){
    return operator(num1,num2);
}
calculator(9,8,multiply);
