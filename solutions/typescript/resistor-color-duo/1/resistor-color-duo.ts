export const COLORS = ["black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"] as const;

export type Color = typeof COLORS[number]


export function decodedValue([color1, color2]: Color[]):number {
 /*  throw new Error('Remove this line and implement the function') */
  return COLORS.indexOf(color1)*10+COLORS.indexOf(color2)


  
}
