const
  fi='MONEY.INP';
  fo='MONEY.OUT';
var
  t,p,res:integer;
  n:longint;
  a:array[1..50] of integer;
  b:array[1..50] of extended;
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
function kiemtra(i:real):boolean;
var
  j:longint;
begin
  for j:=1 to p do
    if b[j]=i then exit(false);
  kiemtra:=true;
end;
//
procedure solve;
var
  i,j,j1:longint;
  dientich:real;
  tmp:boolean;
begin
  readln(t);
  for i:=1 to t do
    begin
      readln(n);
      p:=0; res:=0;
      for j:=1 to n do
        read(a[j]);
      for j:=1 to n-1 do
        for j1:=j+1 to n do
          begin
            dientich:=abs(a[j]-a[j1])*0.5;
            tmp:=kiemtra(dientich);
            if tmp=true then
              begin
                inc(p);
                b[p]:=dientich;
                inc(res);
              end;
          end;
      writeln(res);
    end;

end;
//
begin
  ofile;
  solve;
  cfile;
end.
