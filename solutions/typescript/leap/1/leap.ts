export function isLeap(year: number):boolean {
  /* throw new Error('Remove this line and implement the function') */
  return (year % 4 === 0 && year % 100 !== 0) || year % 400 === 0;
}
