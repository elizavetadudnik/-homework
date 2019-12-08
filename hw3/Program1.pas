 // 1) Дано целое число в диапазоне 1–7. Вывести строку — название дня недели, соответствующее данному числу (1 — «понедельник», 2 — «вторник» и т. д.). 
 
var
  number1: integer;
  
begin
  writeln('введите целрое число от 1 до 7:');
  read(number1);
  if (number1 >= 1) and (number1 <= 7) then 
    case number1 of
      1: writeln('понедельник');
      2: writeln('вторник');
      3: writeln('среда');
      4: writeln('четверг');
      5: writeln('пятница');
      6: writeln('суббота');
      7: writeln('воскресенье');
    end
  else writeln('введено неверное число');
  end.