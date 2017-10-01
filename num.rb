def numeric?(lookAhead)
  lookAhead =~ /[0-9]/
end

def letter?(lookAhead)
  lookAhead =~ /[A-Za-z]/
end