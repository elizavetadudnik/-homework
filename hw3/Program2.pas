// 2) Даны два числа. Вывести порядковый номер меньшего из них.

var
  number1, number2 : real;
begin
  writeln('введите два числа');
  readln(number1, number2);
  if number1 > number2 then 
    writeln('порядковый номер меньшего из них равен 2');
  if number2 > number1 then
    writeln('порядковый номер меньшего из них равен 1');
  if number1 = number2 then 
    writeln('числа равны');
end.