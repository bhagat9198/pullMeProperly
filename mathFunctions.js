const add = (a, b) => {
  return a + b;
};

const subtract = (a, b) => {
  return a - b;
};

const multiply = (a, b) => a * b;
const divide = (a, b) => a / b;

const a = 20;
const b = 10;

const sum = add(a, b);
const diff = subtract(a, b);

console.log(sum);
console.log(diff);
console.log(multiply(a, b));
console.log(divide(a, b));
