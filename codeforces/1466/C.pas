const
  fi='MONEY.INP';
  fo='MONEY.OUT';
var
  t:integer;
  s:string;
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
  j1,j2:char;
begin
  readln(t);
  for i:=1 to t do
    begin
      readln(s); res:=0;
      for j:=2 to length(s) do
        begin
          if ((j=2) and (s[j]=s[j-1])) or ((j>2) and (s[j]=s[j-1])) then
            for j1:='a' to 'z' do
              if (j1 <> s[j-1]) and (j1 <> s[j+1]) and (j1 <> s[j+2]) then
                begin
                  inc(res);
                  s[j]:=j1;
                  break;
                end
             else
          else if (j>2) and (s[j]=s[j-2]) then
            for j2:='a' to 'z' do
              if (j2 <> s[j-1]) and (j2 <> s[j-2]) and (j2 <> s[j+1]) and (j2 <> s[j+2]) then
                begin
                  inc(res);
                  s[j]:=j2;
                  break;
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
