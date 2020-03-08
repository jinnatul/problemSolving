READ n$, m1, m2, m3
WHILE n$ <> "end"
    n = n + 1
    m4 = (m1 + m2 + m3) / 3
    t1 = t1 + m1
    t2 = t2 + m2
    t3 = t3 + m3
    IF m4 < 60 THEN
        s$ = "fail"
    ELSE
        IF m4 < 70 THEN

            s$ = "pass"
        ELSE
            IF m4 < 80 THEN
                s$ = "credit"
            ELSE
                IF m4 < 90 THEN
                    s$ = "excellent"
                ELSE
                    s$ = "start"
                END IF
            END IF
        END IF
    END IF
    PRINT n$, m4, s$
    READ n$, m1, m2, m3
WEND
PRINT "maths", "english", "bangla"
PRINT t1 / n, t2 / n, t3 / n
END
DATA "nader",80,83,80
DATA "amirah",90,94,100
DATA "ascal",80,70,76
DATA "yousuf",60,70,65
DATA "ali",50,60,55
DATA "end",-1,-1,-1
