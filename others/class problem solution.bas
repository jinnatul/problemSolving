READ n$, m1, m2, m3
WHILE n$ <> "end"
    m4 = (m1 + m2 + m3) / 3
    t1 = t1 + m1
    t2 = t2 + m2
    t3 = t3 + m3
    IF m4 < 50 THEN
        s$ = "fail"
    ELSEIF m4 < 70 THEN

        s$ = "pass"
    ELSEIF m4 < 80 THEN
        s$ = "credit"
    ELSEIF m4 < 90 THEN
        s$ = "star"
    ELSE
        s$ = "excellent"
    END IF
    PRINT n$, m4, s$
    READ n$, m1, m2, m3
n=n+1
WEND
PRINT "math", "eng", "bang"
PRINT t1 / n, t2 / n, t3 / n
END
DATA "nadem",60,40,47
DATA "amirah",70,50,60
DATA "ascal",80,73,60
DATA "korim",89,84,81
DATA "asif",93,96,98
DATA "end",-1,-1,-1
