// 3) Даны две переменные вещественного типа: A, B. Перераспределить значения данных переменных так, чтобы в A оказалось меньшее из значений,
// а в B — большее. Вывести новые значения переменных A и B.

var 
  A, B: real;
  
begin
  writeln('введите два вещеcтвенных числа');
  readln(A, B);
  
  if A < B then
  begin
    writeln('A = ', A);
    writeln('B = ', B);
  end;
  
  if A > B then
  begin
    writeln('A = ', B);
    writeln('B = ', A);
  end;
  
  if A = B then
    writeln('эти числа равны');
end.
      
  
