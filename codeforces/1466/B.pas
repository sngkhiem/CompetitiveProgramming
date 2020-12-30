const
  fi='MONEY.INP';
  fo='MONEY.OUT';
var
  t:integer;
  n:longint;
  a,b:array[0..100001] of longword;
//
procedure ofile;
begin
   {$ifndef ONLINE_JUDGE}
    assign(input,fi); reset(input);
    assign(output,fo); rewrite(output);
  {$endif}
end;
//
procedure cfile;
begin
  close(input); close(output);
end;
//
procedure solve;
var
  i,j,res,tmp:longword;
begin
  readln(t);
  for i:=1 to t do
    begin
      res:=1; tmp:=0;
      fillchar(b,sizeof(b),0);
      readln(n);
      for j:=1 to n do
        begin
          read(a[j]);
          if (a[j]=a[j-1]) or (tmp=a[j])  then
             begin
              tmp:=a[j];
              inc(a[j]);
            end;
        end;
      for j:=2 to n do
        if a[j]<>a[j-1] then inc(res);
      writeln(res);
    end;
end;
//
begin
  ofile;
  solve;
  cfile;
end.
