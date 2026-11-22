export type Color = typeof COLORS[number]

export const COLORS = ["black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"] as const;


export function decodedResistorValue([color1, color2, zeros]: Color[]):string {
  
  /* throw new Error('Remove this line and implement the function') */
const ohms = (COLORS.indexOf(color1) * 10 + COLORS.indexOf(color2) ) * (10 ** COLORS.indexOf(zeros));
  
  const sufijos = ["","kilo", "mega", "giga"];
  
  if(ohms > 1000000000){
    return `${ohms/1000000000} gigaohms`
  } else if (ohms > 1000000){
    
    return `${ohms/1000000} megaohms`
  }else if (ohms > 1000){
    return `${ohms/1000} kiloohms`
  }
  return `${ohms} ohms`
  
}
