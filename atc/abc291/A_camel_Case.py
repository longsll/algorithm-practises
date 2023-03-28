s = input()
for i in range(len(s)):
    if s[i] >= "A" and s[i] <= "Z":
        print(i + 1) 
        break