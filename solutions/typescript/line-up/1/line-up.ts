export function format(name: string, number: number): string {
  /* throw new Error('Remove this line and implement the function') */

  const numbers = ["st", "nd", "rd", "th"];
  

  const finisher= number % 100;
  if (finisher === 11 || finisher === 12 || finisher === 13){
    return `${name}, you are the ${number}${numbers[3]} customer we serve today. Thank you!`
  }

  
  const last = String(finisher).slice(-1);
  const lastNumber = Number(last);
  
  console.log(last);

  const sufix2 = (0 < lastNumber) && (lastNumber  < 4)? numbers[lastNumber - 1]: numbers[3];



  return `${name}, you are the ${number}${sufix2} customer we serve today. Thank you!`

}