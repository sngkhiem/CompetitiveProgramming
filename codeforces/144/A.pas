const
  fi='144A.INP';
  fo='144A.OUT';
var
  n,min,max,min1,max1:integer;
  a:array[1..100] of integer;
//
procedure ofile;
begin
  assign(input,fi); reset(input);
  assign(output,fo); rewrite(output);
end;
//
procedure cfile;
begin
  close(input); close(output);
end;
//
procedure enter;
var
  i:integer;
begin
  max:=0; min:=100;
  readln(n);
  for i:=1 to n do
    begin
      read(a[i]);
      if max<a[i] then
        begin
          max:=a[i];
          max1:=i;
        end;
    end;
end;
//
procedure solve;
var
  i:integer;
begin
  for i:=n downto 1 do
    begin
      if min>a[i] then
        begin
          min:=a[i];
          min1:=i;
        end;
    end;
  if max1<min1 then
    write((max1-1)+(n-min1))
  else write((max1-1)+(n-min1)-1);
end;
//
begin
  //ofile;
  enter;
  solve;
  //cfile;
end.