function createCounter(n) {
    let currentValue = n;
    function counter() {
        const value = currentValue;
        currentValue++;
        return value;
    }
    return counter;
}
const n = 10;
const myCounter = createCounter(n);
console.log(myCounter());
console.log(myCounter()); 
console.log(myCounter()); 
