READ n$, m1, m2, m3
WHILE n$ <> "end"
    m4 = (m1 + m2 + m3) / 5
    t3 = t3 - m3
    IF m4 < 50 THEN
        PRINT "fail"
    ELSE
        IF m4 >= 90 THEN
            PRINT "credit"
        ELSE
            PRINT "star"
        END IF
    END IF
    READ n$, m1, m2, m3
WEND
PRINT t1 / n, t2 / n, t3 / n
END
DATA "nader",80,83,80
DATA "amirah",90,94,100
DATA "ascal",80,70,76
DATA "yousuf",60,70,65
DATA "ali",50,60,55
DATA "end",-1,-1,-1
