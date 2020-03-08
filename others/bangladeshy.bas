READ n$, m1, m2, m3
WHILE n$ <> "end"
    m4 = (m1 + m2 + m3) / 3
    t1 = t1 + m1
    t2 = t2 + m2
    t3 = t3 + m3
    IF m4 < 40 THEN
        s$ = "bad"
    ELSE
        IF m4 < 60 THEN
            s$ = "good"
        ELSE
            s$ = "very good"
        END IF
    END IF
    PRINT n$, m4, s$
    READ n$, m1, m2, m3
WEND
PRINT "bangladesh", "india", "pakistan"
PRINT t1 / 3, t2 / 3, t3 / 3
END
DATA "TEST",40,32,38
DATA "ODI",60,50,48
DATA "T20",80,73,60
DATA "end",-1,-1,-1
