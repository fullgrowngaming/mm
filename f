[39m2330:    addiu   sp,sp,[94m-0x48[0m[0m                      [94mi [39m2330:    addiu   sp,sp,[94m-0x40[0m[0m
[39m2334:    sw      s0,0x18(sp)[0m                      [39m  [39m2334:    sw      s0,0x18(sp)[0m
[39m2338:    move    s0,a0[0m                            [39m  [39m2338:    move    s0,a0[0m
[39m233c:    sw      ra,0x1c(sp)[0m                      [39m  [39m233c:    sw      ra,0x1c(sp)[0m
[39m2340:    lh      t6,0x26(s0)[0m                      [39m  [39m2340:    lh      t6,0x26(s0)[0m
[39m2344:    lh      t7,0x20(s0)[0m                      [39m  [39m2344:    lh      t7,0x20(s0)[0m
[39m2348:    addiu   a0,sp,[94m0x3c[0m[0m                       [94mi [39m2348:    addiu   a0,sp,[94m0x34[0m[0m
[39m234c:    addiu   a1,sp,[94m0x34[0m[0m                       [94mi [39m234c:    addiu   a1,sp,[94m0x2c[0m[0m
[39m2350:    subu    t8,t6,t7[0m                         [39m  [39m2350:    subu    t8,t6,t7[0m
[39m2354:    sh      t8,[93m0x34(sp)[39m[0m                      [33ms [39m2354:    sh      t8,[93m0x2c(sp)[39m[0m
[39m2358:    lh      t0,0x22(s0)[0m                      [39m  [39m2358:    lh      t0,0x22(s0)[0m
[39m235c:    lh      t9,0x28(s0)[0m                      [39m  [39m235c:    lh      t9,0x28(s0)[0m
[39m2360:    subu    t1,t9,t0[0m                         [39m  [39m2360:    subu    t1,t9,t0[0m
[39m2364:    sh      t1,[95m0x36(sp)[39m[0m                      [33ms [39m2364:    sh      t1,[95m0x2e(sp)[39m[0m
[39m2368:    lh      t3,0x24(s0)[0m                      [39m  [39m2368:    lh      t3,0x24(s0)[0m
[39m236c:    lh      t2,0x2a(s0)[0m                      [39m  [39m236c:    lh      t2,0x2a(s0)[0m
[39m2370:    subu    t4,t2,t3[0m                         [39m  [39m2370:    subu    t4,t2,t3[0m
[39m2374:    jal     Math_Vec3s_ToVec3f[0m               [39m  [39m2374:    jal     Math_Vec3s_ToVec3f[0m
[39m2378:    sh      t4,[96m0x38(sp)[39m[0m                      [33ms [39m2378:    sh      t4,[96m0x30(sp)[39m[0m
[39m237c:    addiu   a0,sp,[94m0x3c[0m[0m                       [94mi [39m237c:    addiu   a0,sp,[94m0x34[0m[0m
[39m2380:    jal     Math_Vec3f_Scale[0m                 [39m  [39m2380:    jal     Math_Vec3f_Scale[0m
[39m2384:    lw      a1,0x30(s0)[0m                      [39m  [39m2384:    lw      a1,0x30(s0)[0m
[39m2388:    addiu   a0,sp,[94m0x34[0m[0m                       [94mi [39m2388:    addiu   a0,sp,[94m0x2c[0m[0m
[39m238c:    jal     Math_Vec3f_ToVec3s[0m               [39m  [39m238c:    jal     Math_Vec3f_ToVec3s[0m
[39m2390:    addiu   a1,sp,[94m0x3c[0m[0m                       [94mi [39m2390:    addiu   a1,sp,[94m0x34[0m[0m
[39m2394:    lh      v0,[93m0x34(sp)[39m[0m                      [33ms [39m2394:    lh      v0,[93m0x2c(sp)[39m[0m
[39m2398:    addiu   a0,s0,0x20[0m                       [39m  [39m2398:    addiu   a0,s0,0x20[0m
[39m239c:    bgez    v0,23b0[0m [35m~>[39m                       [39m  [39m239c:    bgez    v0,23b0[0m [35m~>[39m
[39m23a0:    negu    v0,v0[0m                            [39m  [39m23a0:    negu    v0,v0[0m
[39m23a4:    sll     v0,v0,0x10[0m                       [39m  [39m23a4:    sll     v0,v0,0x10[0m
[39m23a8:    sra     v0,v0,0x10[0m                       [39m  [39m23a8:    sra     v0,v0,0x10[0m
[39m23ac:    sh      v0,[93m0x34(sp)[39m[0m                      [33ms [39m23ac:    sh      v0,[93m0x2c(sp)[39m[0m
[39m23b0: [35m~>[39m[39m lh      v0,[95m0x36(sp)[39m[0m                      [33ms [39m23b0: [35m~>[39m[39m lh      v0,[95m0x2e(sp)[39m[0m
[39m23b4:    bgez    v0,23c8[0m [36m~>[39m                       [39m  [39m23b4:    bgez    v0,23c8[0m [36m~>[39m
[39m23b8:    negu    v0,v0[0m                            [39m  [39m23b8:    negu    v0,v0[0m
[39m23bc:    sll     v0,v0,0x10[0m                       [39m  [39m23bc:    sll     v0,v0,0x10[0m
[39m23c0:    sra     v0,v0,0x10[0m                       [39m  [39m23c0:    sra     v0,v0,0x10[0m
[39m23c4:    sh      v0,[95m0x36(sp)[39m[0m                      [33ms [39m23c4:    sh      v0,[95m0x2e(sp)[39m[0m
[39m23c8: [36m~>[39m[39m lh      v0,[96m0x38(sp)[39m[0m                      [33ms [39m23c8: [36m~>[39m[39m lh      v0,[96m0x30(sp)[39m[0m
[39m23cc:    bgez    v0,23e0[0m [32m~>[39m                       [39m  [39m23cc:    bgez    v0,23e0[0m [32m~>[39m
[39m23d0:    negu    v0,v0[0m                            [39m  [39m23d0:    negu    v0,v0[0m
[39m23d4:    sll     v0,v0,0x10[0m                       [39m  [39m23d4:    sll     v0,v0,0x10[0m
[39m23d8:    sra     v0,v0,0x10[0m                       [39m  [39m23d8:    sra     v0,v0,0x10[0m
[39m23dc:    sh      v0,[96m0x38(sp)[39m[0m                      [33ms [39m23dc:    sh      v0,[96m0x30(sp)[39m[0m
[39m23e0: [32m~>[39m[39m lh      v0,0x2c(s0)[0m                      [39m  [39m23e0: [32m~>[39m[39m lh      v0,0x2c(s0)[0m
[39m23e4:    lh      t5,[93m0x34(sp)[39m[0m                      [33ms [39m23e4:    lh      t5,[93m0x2c(sp)[39m[0m
[39m23e8:    slt     at,v0,t5[0m                         [39m  [39m23e8:    slt     at,v0,t5[0m
[39m23ec:    beqzl   at,2400[0m [31m~>[39m                       [39m  [39m23ec:    beqzl   at,2400[0m [31m~>[39m
[39m23f0:    [1m[90mlh t6,0x36(sp)[0m                           [39m  [39m23f0:    [1m[90mlh t6,0x2e(sp)[0m
[39m23f4:    sh      v0,[93m0x34(sp)[39m[0m                      [33ms [39m23f4:    sh      v0,[93m0x2c(sp)[39m[0m
[39m23f8:    lh      v0,0x2c(s0)[0m                      [39m  [39m23f8:    lh      v0,0x2c(s0)[0m
[39m23fc: [31m~>[39m[39m lh      t6,[95m0x36(sp)[39m[0m                      [33ms [39m23fc: [31m~>[39m[39m lh      t6,[95m0x2e(sp)[39m[0m
[39m2400:    slt     at,v0,t6[0m                         [39m  [39m2400:    slt     at,v0,t6[0m
[39m2404:    beqzl   at,2418[0m [93m~>[39m                       [39m  [39m2404:    beqzl   at,2418[0m [93m~>[39m
[39m2408:    [1m[90mlh t7,0x38(sp)[0m                           [39m  [39m2408:    [1m[90mlh t7,0x30(sp)[0m
[39m240c:    sh      v0,[95m0x36(sp)[39m[0m                      [33ms [39m240c:    sh      v0,[95m0x2e(sp)[39m[0m
[39m2410:    lh      v0,0x2c(s0)[0m                      [39m  [39m2410:    lh      v0,0x2c(s0)[0m
[39m2414: [93m~>[39m[39m lh      t7,[96m0x38(sp)[39m[0m                      [33ms [39m2414: [93m~>[39m[39m lh      t7,[96m0x30(sp)[39m[0m
[39m2418:    slt     at,v0,t7[0m                         [39m  [39m2418:    slt     at,v0,t7[0m
[39m241c:    beqzl   at,242c[0m [95m~>[39m                       [39m  [39m241c:    beqzl   at,242c[0m [95m~>[39m
[39m2420:    lh      a1,0x26(s0)[0m                      [39m  [39m2420:    lh      a1,0x26(s0)[0m
[39m2424:    sh      v0,[96m0x38(sp)[39m[0m                      [33ms [39m2424:    sh      v0,[96m0x30(sp)[39m[0m
[39m2428: [95m~>[39m[39m lh      a1,0x26(s0)[0m                      [39m  [39m2428: [95m~>[39m[39m lh      a1,0x26(s0)[0m
[39m242c:    jal     Math_ScaledStepToS[0m               [39m  [39m242c:    jal     Math_ScaledStepToS[0m
[39m2430:    lh      a2,[93m0x34(sp)[39m[0m                      [33ms [39m2430:    lh      a2,[93m0x2c(sp)[39m[0m
[39m2434:    addiu   a0,s0,0x22[0m                       [39m  [39m2434:    addiu   a0,s0,0x22[0m
[39m2438:    lh      a1,0x28(s0)[0m                      [39m  [39m2438:    lh      a1,0x28(s0)[0m
[39m243c:    jal     Math_ScaledStepToS[0m               [39m  [39m243c:    jal     Math_ScaledStepToS[0m
[39m2440:    lh      a2,[95m0x36(sp)[39m[0m                      [33ms [39m2440:    lh      a2,[95m0x2e(sp)[39m[0m
[39m2444:    addiu   a0,s0,0x24[0m                       [39m  [39m2444:    addiu   a0,s0,0x24[0m
[39m2448:    lh      a1,0x2a(s0)[0m                      [39m  [39m2448:    lh      a1,0x2a(s0)[0m
[39m244c:    jal     Math_ScaledStepToS[0m               [39m  [39m244c:    jal     Math_ScaledStepToS[0m
[39m2450:    lh      a2,[96m0x38(sp)[39m[0m                      [33ms [39m2450:    lh      a2,[96m0x30(sp)[39m[0m
[39m2454:    addiu   a0,s0,0x34[0m                       [39m  [39m2454:    addiu   a0,s0,0x34[0m
[39m2458:    lw      a1,0x38(s0)[0m                      [39m  [39m2458:    lw      a1,0x38(s0)[0m
[39m245c:    jal     Math_StepToF[0m                     [39m  [39m245c:    jal     Math_StepToF[0m
[39m2460:    lw      a2,0x3c(s0)[0m                      [39m  [39m2460:    lw      a2,0x3c(s0)[0m
[39m2464:    lh      a1,0x42(s0)[0m                      [39m  [39m2464:    lh      a1,0x42(s0)[0m
[39m2468:    lh      v0,0x40(s0)[0m                      [39m  [39m2468:    lh      v0,0x40(s0)[0m
[39m246c:    beq     a1,v0,[94m24f4[0m[0m [96m~>[39m                    [94mi [39m246c:    beq     a1,v0,[94m24e8[0m[0m [96m~>[39m
[33m2470:    subu    [35ma2[39m,[0ma1,[0mv0[0m                         [33mr [33m2470:    subu    [35mt8[39m,[0ma1,[0mv0[0m
[33m2474:    sll     [35ma2[39m,[35ma2[39m,[0m0x10[0m                       [33mr [33m2474:    sll     [36mt9[39m,[35mt8[39m,[0m0x10[0m
[33m2478:    sra     [35ma2[39m,[35ma2[39m,[0m0x10[0m                       [33mr [33m2478:    sra     [32mt0[39m,[36mt9[39m,[0m0x10[0m
[33m247c:    mtc1    [35ma2[39m,[0m$f4[0m                           [33mr [33m247c:    mtc1    [32mt0[39m,[0m$f4[0m
[39m2480:    lwc1    $f8,0x44(s0)[0m                     [39m  [39m2480:    lwc1    $f8,0x44(s0)[0m
[39m2484:    cvt.s.w $f6,$f4[0m                          [39m  [39m2484:    cvt.s.w $f6,$f4[0m
[39m2488:    mul.s   $f10,$f6,$f8[0m                     [39m  [39m2488:    mul.s   $f10,$f6,$f8[0m
[39m248c:    trunc.w.s $f16,$f10[0m                      [39m  [39m248c:    trunc.w.s $f16,$f10[0m
[39m2490:    mfc1    a2,$f16[0m                          [39m  [39m2490:    mfc1    a2,$f16[0m
[39m2494:    nop[0m                                      [39m  [39m2494:    nop[0m
[39m2498:    sll     a2,a2,0x10[0m                       [39m  [39m2498:    sll     a2,a2,0x10[0m
[39m249c:    sra     a2,a2,0x10[0m                       [39m  [39m249c:    sra     a2,a2,0x10[0m
[39m24a0:    bgezl   a2,24b8[0m [92m~>[39m                       [39m  [39m24a0:    bgezl   a2,24b8[0m [92m~>[39m
[39m24a4:    slti    at,a2,0x64[0m                       [39m  [39m24a4:    slti    at,a2,0x64[0m
[39m24a8:    negu    a2,a2[0m                            [39m  [39m24a8:    negu    a2,a2[0m
[39m24ac:    sll     a2,a2,0x10[0m                       [39m  [39m24ac:    sll     a2,a2,0x10[0m
[39m24b0:    sra     a2,a2,0x10[0m                       [39m  [39m24b0:    sra     a2,a2,0x10[0m
[39m24b4: [92m~>[39m[39m slti    at,a2,0x64[0m                       [39m  [39m24b4: [92m~>[39m[39m slti    at,a2,0x64[0m
[39m24b8:    beqzl   at,24cc[0m [90m~>[39m                       [39m  [39m24b8:    beqzl   at,24cc[0m [90m~>[39m
[39m24bc:    lh      v0,0x48(s0)[0m                      [39m  [39m24bc:    lh      v0,0x48(s0)[0m
[39m24c0:    b       [94m24ec[0m[0m [35m~>[39m                          [94mi [39m24c0:    b       [94m24e0[0m[0m [35m~>[39m
[39m24c4:    li      a2,0x64[0m                          [39m  [39m24c4:    li      a2,0x64[0m
[39m24c8: [90m~>[39m[39m lh      v0,0x48(s0)[0m                      [39m  [39m24c8: [90m~>[39m[39m lh      v0,0x48(s0)[0m
[31m24cc:    move    v1,a2[0m                            [31m< 
[39m24d0:    slt     at,v0,a2[0m                         [39m  [39m24cc:    slt     at,v0,a2[0m
[39m24d4:    beqz    at,24e4[0m [36m~>[39m                       [39m  [39m24d0:    beqz    at,24e0[0m [35m~>[39m
[39m24d8:    nop[0m                                      [39m  [39m24d4:    nop[0m
[31m24dc:    b       24e4[0m [36m~>[39m                          [31m< 
[31m24e0:    move    v1,v0[0m                            [31m< 
[33m24e4: [36m~>[39m[33m sll     [0ma2,[36mv1[39m,[0m0x10[0m                       [33mr [33m24d8:    sll     [0ma2,[31mv0[39m,[0m0x10[0m
[39m24e8:    sra     a2,a2,0x10[0m                       [39m  [39m24dc:    sra     a2,a2,0x10[0m
[39m24ec: [35m~>[39m[39m jal     Math_ScaledStepToS[0m               [39m  [39m24e0: [35m~>[39m[39m jal     Math_ScaledStepToS[0m
[39m24f0:    addiu   a0,s0,0x40[0m                       [39m  [39m24e4:    addiu   a0,s0,0x40[0m
[39m24f4: [96m~>[39m[39m jal     func_80B45BB8[0m                    [39m  [39m24e8: [96m~>[39m[39m jal     func_80B45BB8[0m
[39m24f8:    move    a0,s0[0m                            [39m  [39m24ec:    move    a0,s0[0m
[39m24fc:    jal     func_80B45BB8[0m                    [39m  [39m24f0:    jal     func_80B45BB8[0m
[39m2500:    addiu   a0,s0,0x10[0m                       [39m  [39m24f4:    addiu   a0,s0,0x10[0m
[39m2504:    lw      ra,0x1c(sp)[0m                      [39m  [39m24f8:    lw      ra,0x1c(sp)[0m
[39m2508:    lw      s0,0x18(sp)[0m                      [39m  [39m24fc:    lw      s0,0x18(sp)[0m
[39m250c:    addiu   sp,sp,[94m0x48[0m[0m                       [94mi [39m2500:    addiu   sp,sp,[94m0x40[0m[0m
[39m2510:    jr      ra[0m                               [39m  [39m2504:    jr      ra[0m
[39m2514:    nop[0m                                      [39m  [39m2508:    nop[0m
[39m2518:    addiu   sp,sp,-0xb8[0m                      [39m  [39m250c:    addiu   sp,sp,-0xb8[0m
[39m251c:    sw      s2,0x60(sp)[0m                      [39m  [39m2510:    sw      s2,0x60(sp)[0m
[39m2520:    move    s2,a0[0m                            [39m  [39m2514:    move    s2,a0[0m
[39m2524:    sw      ra,0x7c(sp)[0m                      [39m  [39m2518:    sw      ra,0x7c(sp)[0m
[39m2528:    sw      s8,0x78(sp)[0m                      [39m  [39m251c:    sw      s8,0x78(sp)[0m
[39m252c:    sw      s7,0x74(sp)[0m                      [39m  [39m2520:    sw      s7,0x74(sp)[0m
[39m2530:    sw      s6,0x70(sp)[0m                      [39m  [39m2524:    sw      s6,0x70(sp)[0m
[39m2534:    sw      s5,0x6c(sp)[0m                      [39m  [39m2528:    sw      s5,0x6c(sp)[0m
[39m2538:    sw      s4,0x68(sp)[0m                      [39m  [39m252c:    sw      s4,0x68(sp)[0m
[39m253c:    sw      s3,0x64(sp)[0m                      [39m  [39m2530:    sw      s3,0x64(sp)[0m
[39m2540:    sw      s1,0x5c(sp)[0m                      [39m  [39m2534:    sw      s1,0x5c(sp)[0m
[39m2544:    sw      s0,0x58(sp)[0m                      [39m  [39m2538:    sw      s0,0x58(sp)[0m
[39m2548:    sdc1    $f30,0x50(sp)[0m                    [39m  [39m253c:    sdc1    $f30,0x50(sp)[0m
[39m254c:    sdc1    $f28,0x48(sp)[0m                    [39m  [39m2540:    sdc1    $f28,0x48(sp)[0m
[39m2550:    sdc1    $f26,0x40(sp)[0m                    [39m  [39m2544:    sdc1    $f26,0x40(sp)[0m
[39m2554:    sdc1    $f24,0x38(sp)[0m                    [39m  [39m2548:    sdc1    $f24,0x38(sp)[0m
[39m2558:    sdc1    $f22,0x30(sp)[0m                    [39m  [39m254c:    sdc1    $f22,0x30(sp)[0m
[39m255c:    sdc1    $f20,0x28(sp)[0m                    [39m  [39m2550:    sdc1    $f20,0x28(sp)[0m
[39m2560:    sw      a1,0xbc(sp)[0m                      [39m  [39m2554:    sw      a1,0xbc(sp)[0m
[39m2564:    move    s0,zero[0m                          [39m  [39m2558:    move    s0,zero[0m
[39m2568:    blez    a2,2720[0m [32m~>[39m                       [39m  [39m255c:    blez    a2,2714[0m [36m~>[39m
[39m256c:    move    s1,zero[0m                          [39m  [39m2560:    move    s1,zero[0m
[39m2570:    mtc1    a2,$f6[0m                           [39m  [39m2564:    mtc1    a2,$f6[0m
[39m2574:    lui     at,0x4780[0m                        [39m  [39m2568:    lui     at,0x4780[0m
[39m2578:    mtc1    at,$f4[0m                           [39m  [39m256c:    mtc1    at,$f4[0m
[39m257c:    cvt.s.w $f8,$f6[0m                          [39m  [39m2570:    cvt.s.w $f8,$f6[0m
[39m2580:    lui     at,0x4100[0m                        [39m  [39m2574:    lui     at,0x4100[0m
[39m2584:    mtc1    at,$f30[0m                          [39m  [39m2578:    mtc1    at,$f30[0m
[39m2588:    lui     at,0x41f0[0m                        [39m  [39m257c:    lui     at,0x41f0[0m
[39m258c:    mtc1    at,$f28[0m                          [39m  [39m2580:    mtc1    at,$f28[0m
[39m2590:    lui     at,0x4180[0m                        [39m  [39m2584:    lui     at,0x4180[0m
[39m2594:    div.s   $f10,$f4,$f8[0m                     [39m  [39m2588:    div.s   $f10,$f4,$f8[0m
[39m2598:    mtc1    at,$f26[0m                          [39m  [39m258c:    mtc1    at,$f26[0m
[39m259c:    lui     at,0x3f00[0m                        [39m  [39m2590:    lui     at,0x3f00[0m
[39m25a0:    mtc1    at,$f24[0m                          [39m  [39m2594:    mtc1    at,$f24[0m
[39m25a4:    lui     at,%hi(D_80B4EE84)[0m               [39m  [39m2598:    lui     at,%hi(D_80B4EE84)[0m
[39m25a8:    lui     s8,%hi(D_80B4EC1C)[0m               [39m  [39m259c:    lui     s8,%hi(D_80B4EC1C)[0m
[39m25ac:    lui     s7,%hi(D_80B4EC18)[0m               [39m  [39m25a0:    lui     s7,%hi(D_80B4EC18)[0m
[39m25b0:    addiu   s7,s7,%lo(D_80B4EC18)[0m            [39m  [39m25a4:    addiu   s7,s7,%lo(D_80B4EC18)[0m
[39m25b4:    addiu   s8,s8,%lo(D_80B4EC1C)[0m            [39m  [39m25a8:    addiu   s8,s8,%lo(D_80B4EC1C)[0m
[39m25b8:    lwc1    $f22,%lo(D_80B4EE84)(at)[0m         [39m  [39m25ac:    lwc1    $f22,%lo(D_80B4EE84)(at)[0m
[39m25bc:    sw      a2,0xc0(sp)[0m                      [39m  [39m25b0:    sw      a2,0xc0(sp)[0m
[39m25c0:    addiu   s6,sp,0x90[0m                       [39m  [39m25b4:    addiu   s6,sp,0x90[0m
[39m25c4:    addiu   s5,sp,0x9c[0m                       [39m  [39m25b8:    addiu   s5,sp,0x9c[0m
[39m25c8:    addiu   s4,sp,0xa8[0m                       [39m  [39m25bc:    addiu   s4,sp,0xa8[0m
[39m25cc:    trunc.w.s $f16,$f10[0m                      [39m  [39m25c0:    trunc.w.s $f16,$f10[0m
[39m25d0:    mfc1    s3,$f16[0m                          [39m  [39m25c4:    mfc1    s3,$f16[0m
[39m25d4:    nop[0m                                      [39m  [39m25c8:    nop[0m
[39m25d8:    sll     s3,s3,0x10[0m                       [39m  [39m25cc:    sll     s3,s3,0x10[0m
[39m25dc:    sra     s3,s3,0x10[0m                       [39m  [39m25d0:    sra     s3,s3,0x10[0m
[39m25e0: [31m~>[39m[39m addu    s0,s0,s3[0m                         [39m  [39m25d4: [32m~>[39m[39m addu    s0,s0,s3[0m
[39m25e4:    sll     s0,s0,0x10[0m                       [39m  [39m25d8:    sll     s0,s0,0x10[0m
[39m25e8:    jal     Rand_ZeroOne[0m                     [39m  [39m25dc:    jal     Rand_ZeroOne[0m
[39m25ec:    sra     s0,s0,0x10[0m                       [39m  [39m25e0:    sra     s0,s0,0x10[0m
[39m25f0:    mul.s   $f18,$f0,$f24[0m                    [39m  [39m25e4:    mul.s   $f18,$f0,$f24[0m
[39m25f4:    sll     a0,s0,0x10[0m                       [39m  [39m25e8:    sll     a0,s0,0x10[0m
[39m25f8:    sra     a0,a0,0x10[0m                       [39m  [39m25ec:    sra     a0,a0,0x10[0m
[39m25fc:    jal     Math_SinS[0m                        [39m  [39m25f0:    jal     Math_SinS[0m
[39m2600:    add.s   $f20,$f18,$f24[0m                   [39m  [39m25f4:    add.s   $f20,$f18,$f24[0m
[39m2604:    mul.s   $f6,$f0,$f20[0m                     [39m  [39m25f8:    mul.s   $f6,$f0,$f20[0m
[39m2608:    sll     a0,s0,0x10[0m                       [39m  [39m25fc:    sll     a0,s0,0x10[0m
[39m260c:    sra     a0,a0,0x10[0m                       [39m  [39m2600:    sra     a0,a0,0x10[0m
[39m2610:    jal     Math_CosS[0m                        [39m  [39m2604:    jal     Math_CosS[0m
[39m2614:    swc1    $f6,0xa8(sp)[0m                     [39m  [39m2608:    swc1    $f6,0xa8(sp)[0m
[39m2618:    mul.s   $f4,$f0,$f20[0m                     [39m  [39m260c:    mul.s   $f4,$f0,$f20[0m
[39m261c:    jal     Rand_ZeroOne[0m                     [39m  [39m2610:    jal     Rand_ZeroOne[0m
[39m2620:    swc1    $f4,0xb0(sp)[0m                     [39m  [39m2614:    swc1    $f4,0xb0(sp)[0m
[39m2624:    mul.s   $f8,$f0,$f26[0m                     [39m  [39m2618:    mul.s   $f8,$f0,$f26[0m
[39m2628:    lwc1    $f10,0xa8(sp)[0m                    [39m  [39m261c:    lwc1    $f10,0xa8(sp)[0m
[39m262c:    lui     at,0xc100[0m                        [39m  [39m2620:    lui     at,0xc100[0m
[39m2630:    mtc1    at,$f4[0m                           [39m  [39m2624:    mtc1    at,$f4[0m
[39m2634:    mul.s   $f16,$f10,$f28[0m                   [39m  [39m2628:    mul.s   $f16,$f10,$f28[0m
[39m2638:    swc1    $f4,0xa0(sp)[0m                     [39m  [39m262c:    swc1    $f4,0xa0(sp)[0m
[39m263c:    add.s   $f18,$f8,$f16[0m                    [39m  [39m2630:    add.s   $f18,$f8,$f16[0m
[39m2640:    sub.s   $f6,$f18,$f30[0m                    [39m  [39m2634:    sub.s   $f6,$f18,$f30[0m
[39m2644:    jal     Rand_ZeroOne[0m                     [39m  [39m2638:    jal     Rand_ZeroOne[0m
[39m2648:    swc1    $f6,0x9c(sp)[0m                     [39m  [39m263c:    swc1    $f6,0x9c(sp)[0m
[39m264c:    mul.s   $f10,$f0,$f26[0m                    [39m  [39m2640:    mul.s   $f10,$f0,$f26[0m
[39m2650:    lwc1    $f8,0xb0(sp)[0m                     [39m  [39m2644:    lwc1    $f8,0xb0(sp)[0m
[39m2654:    lwc1    $f4,0x9c(sp)[0m                     [39m  [39m2648:    lwc1    $f4,0x9c(sp)[0m
[39m2658:    lui     at,0x42c8[0m                        [39m  [39m264c:    lui     at,0x42c8[0m
[39m265c:    mul.s   $f16,$f8,$f28[0m                    [39m  [39m2650:    mul.s   $f16,$f8,$f28[0m
[39m2660:    add.s   $f18,$f10,$f16[0m                   [39m  [39m2654:    add.s   $f18,$f10,$f16[0m
[39m2664:    mul.s   $f8,$f4,$f22[0m                     [39m  [39m2658:    mul.s   $f8,$f4,$f22[0m
[39m2668:    lwc1    $f10,0xa0(sp)[0m                    [39m  [39m265c:    lwc1    $f10,0xa0(sp)[0m
[39m266c:    lwc1    $f4,0xa8(sp)[0m                     [39m  [39m2660:    lwc1    $f4,0xa8(sp)[0m
[39m2670:    mul.s   $f16,$f10,$f22[0m                   [39m  [39m2664:    mul.s   $f16,$f10,$f22[0m
[39m2674:    sub.s   $f6,$f18,$f30[0m                    [39m  [39m2668:    sub.s   $f6,$f18,$f30[0m
[39m2678:    swc1    $f8,0x90(sp)[0m                     [39m  [39m266c:    swc1    $f8,0x90(sp)[0m
[39m267c:    mtc1    at,$f8[0m                           [39m  [39m2670:    mtc1    at,$f8[0m
[39m2680:    mul.s   $f18,$f6,$f22[0m                    [39m  [39m2674:    mul.s   $f18,$f6,$f22[0m
[39m2684:    swc1    $f6,0xa4(sp)[0m                     [39m  [39m2678:    swc1    $f6,0xa4(sp)[0m
[39m2688:    swc1    $f16,0x94(sp)[0m                    [39m  [39m267c:    swc1    $f16,0x94(sp)[0m
[39m268c:    mul.s   $f10,$f4,$f8[0m                     [39m  [39m2680:    mul.s   $f10,$f4,$f8[0m
[39m2690:    swc1    $f18,0x98(sp)[0m                    [39m  [39m2684:    swc1    $f18,0x98(sp)[0m
[39m2694:    lwc1    $f16,0x24(s2)[0m                    [39m  [39m2688:    lwc1    $f16,0x24(s2)[0m
[39m2698:    add.s   $f6,$f10,$f16[0m                    [39m  [39m268c:    add.s   $f6,$f10,$f16[0m
[39m269c:    jal     Rand_ZeroOne[0m                     [39m  [39m2690:    jal     Rand_ZeroOne[0m
[39m26a0:    swc1    $f6,0xa8(sp)[0m                     [39m  [39m2694:    swc1    $f6,0xa8(sp)[0m
[39m26a4:    lui     at,0x4334[0m                        [39m  [39m2698:    lui     at,0x4334[0m
[39m26a8:    mtc1    at,$f18[0m                          [39m  [39m269c:    mtc1    at,$f18[0m
[39m26ac:    lwc1    $f8,0x28(s2)[0m                     [39m  [39m26a0:    lwc1    $f8,0x28(s2)[0m
[39m26b0:    lui     at,0x42b4[0m                        [39m  [39m26a4:    lui     at,0x42b4[0m
[39m26b4:    mul.s   $f4,$f0,$f18[0m                     [39m  [39m26a8:    mul.s   $f4,$f0,$f18[0m
[39m26b8:    mtc1    at,$f16[0m                          [39m  [39m26ac:    mtc1    at,$f16[0m
[39m26bc:    lui     at,0x42c8[0m                        [39m  [39m26b0:    lui     at,0x42c8[0m
[39m26c0:    lwc1    $f18,0xb0(sp)[0m                    [39m  [39m26b4:    lwc1    $f18,0xb0(sp)[0m
[39m26c4:    li      t7,0x1770[0m                        [39m  [39m26b8:    li      t7,0x1770[0m
[39m26c8:    li      t8,-0x28[0m                         [39m  [39m26bc:    li      t8,-0x28[0m
[39m26cc:    lw      a0,0xbc(sp)[0m                      [39m  [39m26c0:    lw      a0,0xbc(sp)[0m
[39m26d0:    add.s   $f10,$f4,$f8[0m                     [39m  [39m26c4:    add.s   $f10,$f4,$f8[0m
[39m26d4:    mtc1    at,$f4[0m                           [39m  [39m26c8:    mtc1    at,$f4[0m
[39m26d8:    move    a1,s4[0m                            [39m  [39m26cc:    move    a1,s4[0m
[39m26dc:    move    a2,s5[0m                            [39m  [39m26d0:    move    a2,s5[0m
[39m26e0:    sub.s   $f6,$f10,$f16[0m                    [39m  [39m26d4:    sub.s   $f6,$f10,$f16[0m
[39m26e4:    mul.s   $f8,$f18,$f4[0m                     [39m  [39m26d8:    mul.s   $f8,$f18,$f4[0m
[39m26e8:    move    a3,s6[0m                            [39m  [39m26dc:    move    a3,s6[0m
[39m26ec:    swc1    $f6,0xac(sp)[0m                     [39m  [39m26e0:    swc1    $f6,0xac(sp)[0m
[39m26f0:    lwc1    $f10,0x2c(s2)[0m                    [39m  [39m26e4:    lwc1    $f10,0x2c(s2)[0m
[39m26f4:    sw      t8,0x1c(sp)[0m                      [39m  [39m26e8:    sw      t8,0x1c(sp)[0m
[39m26f8:    sw      t7,0x18(sp)[0m                      [39m  [39m26ec:    sw      t7,0x18(sp)[0m
[39m26fc:    add.s   $f16,$f8,$f10[0m                    [39m  [39m26f0:    add.s   $f16,$f8,$f10[0m
[39m2700:    sw      s8,0x14(sp)[0m                      [39m  [39m26f4:    sw      s8,0x14(sp)[0m
[39m2704:    sw      s7,0x10(sp)[0m                      [39m  [39m26f8:    sw      s7,0x10(sp)[0m
[39m2708:    jal     EffectSsKiraKira_SpawnDispersed[0m  [39m  [39m26fc:    jal     EffectSsKiraKira_SpawnDispersed[0m
[39m270c:    swc1    $f16,0xb0(sp)[0m                    [39m  [39m2700:    swc1    $f16,0xb0(sp)[0m
[39m2710:    lw      t9,0xc0(sp)[0m                      [39m  [39m2704:    lw      t9,0xc0(sp)[0m
[39m2714:    addiu   s1,s1,1[0m                          [39m  [39m2708:    addiu   s1,s1,1[0m
[39m2718:    bnel    s1,t9,25e4[0m [31m~>[39m                    [39m  [39m270c:    bnel    s1,t9,25d8[0m [32m~>[39m
[39m271c:    addu    s0,s0,s3[0m                         [39m  [39m2710:    addu    s0,s0,s3[0m
[39m2720: [32m~>[39m[39m lw      ra,0x7c(sp)[0m                      [39m  [39m2714: [36m~>[39m[39m lw      ra,0x7c(sp)[0m
[39m2724:    ldc1    $f20,0x28(sp)[0m                    [39m  [39m2718:    ldc1    $f20,0x28(sp)[0m
[39m2728:    ldc1    $f22,0x30(sp)[0m                    [39m  [39m271c:    ldc1    $f22,0x30(sp)[0m
[39m272c:    ldc1    $f24,0x38(sp)[0m                    [39m  [39m2720:    ldc1    $f24,0x38(sp)[0m
[39m2730:    ldc1    $f26,0x40(sp)[0m                    [39m  [39m2724:    ldc1    $f26,0x40(sp)[0m
[39m2734:    ldc1    $f28,0x48(sp)[0m                    [39m  [39m2728:    ldc1    $f28,0x48(sp)[0m
[39m2738:    ldc1    $f30,0x50(sp)[0m                    [39m  [39m272c:    ldc1    $f30,0x50(sp)[0m
[39m273c:    lw      s0,0x58(sp)[0m                      [39m  [39m2730:    lw      s0,0x58(sp)[0m
[39m2740:    lw      s1,0x5c(sp)[0m                      [39m  [39m2734:    lw      s1,0x5c(sp)[0m
[39m2744:    lw      s2,0x60(sp)[0m                      [39m  [39m2738:    lw      s2,0x60(sp)[0m
[39m2748:    lw      s3,0x64(sp)[0m                      [39m  [39m273c:    lw      s3,0x64(sp)[0m
[39m274c:    lw      s4,0x68(sp)[0m                      [39m  [39m2740:    lw      s4,0x68(sp)[0m
[39m2750:    lw      s5,0x6c(sp)[0m                      [39m  [39m2744:    lw      s5,0x6c(sp)[0m
[39m2754:    lw      s6,0x70(sp)[0m                      [39m  [39m2748:    lw      s6,0x70(sp)[0m
[39m2758:    lw      s7,0x74(sp)[0m                      [39m  [39m274c:    lw      s7,0x74(sp)[0m
[39m275c:    lw      s8,0x78(sp)[0m                      [39m  [39m2750:    lw      s8,0x78(sp)[0m
[39m2760:    jr      ra[0m                               [39m  [39m2754:    jr      ra[0m
[39m2764:    addiu   sp,sp,0xb8[0m                       [39m  [39m2758:    addiu   sp,sp,0xb8[0m
[39m2768:    addiu   sp,sp,-0x20[0m                      [39m  [39m275c:    addiu   sp,sp,-0x20[0m
[39m276c:    sw      ra,0x14(sp)[0m                      [39m  [39m2760:    sw      ra,0x14(sp)[0m
[39m2770:    move    a1,a0[0m                            [39m  [39m2764:    move    a1,a0[0m
[39m2774:    lui     v1,%hi(D_80B50350)[0m               [39m  [39m2768:    lui     v1,%hi(D_80B50350)[0m
[39m2778:    addiu   v1,v1,%lo(D_80B50350)[0m            [39m  [39m276c:    addiu   v1,v1,%lo(D_80B50350)[0m
[39m277c:    move    v0,zero[0m                          [39m  [39m2770:    move    v0,zero[0m
[39m2780:    li      a0,0xa[0m                           [39m  [39m2774:    li      a0,0xa[0m
[39m2784: [96m~>[39m[39m lb      t6,1(v1)[0m                         [39m  [39m2778: [95m~>[39m[39m lb      t6,1(v1)[0m
[39m2788:    addiu   v0,v0,1[0m                          [39m  [39m277c:    addiu   v0,v0,1[0m
[39m278c:    bgtz    t6,27b8[0m [93m~>[39m                       [39m  [39m2780:    bgtz    t6,27ac[0m [31m~>[39m
[39m2790:    li      t7,0x28[0m                          [39m  [39m2784:    li      t7,0x28[0m
[39m2794:    sb      zero,0(v1)[0m                       [39m  [39m2788:    sb      zero,0(v1)[0m
[39m2798:    sb      t7,1(v1)[0m                         [39m  [39m278c:    sb      t7,1(v1)[0m
[39m279c:    sw      v1,0x1c(sp)[0m                      [39m  [39m2790:    sw      v1,0x1c(sp)[0m
[39m27a0:    jal     Math_Vec3f_Copy[0m                  [39m  [39m2794:    jal     Math_Vec3f_Copy[0m
[39m27a4:    addiu   a0,v1,4[0m                          [39m  [39m2798:    addiu   a0,v1,4[0m
[39m27a8:    lw      v1,0x1c(sp)[0m                      [39m  [39m279c:    lw      v1,0x1c(sp)[0m
[39m27ac:    li      v0,1[0m                             [39m  [39m27a0:    li      v0,1[0m
[39m27b0:    b       27c4[0m [95m~>[39m                          [39m  [39m27a4:    b       27b8[0m [93m~>[39m
[39m27b4:    sb      zero,2(v1)[0m                       [39m  [39m27a8:    sb      zero,2(v1)[0m
[39m27b8: [93m~>[39m[39m bne     v0,a0,2784[0m [96m~>[39m                    [39m  [39m27ac: [31m~>[39m[39m bne     v0,a0,2778[0m [95m~>[39m
[39m27bc:    addiu   v1,v1,0x10[0m                       [39m  [39m27b0:    addiu   v1,v1,0x10[0m
[39m27c0:    move    v0,zero[0m                          [39m  [39m27b4:    move    v0,zero[0m
[39m27c4: [95m~>[39m[39m lw      ra,0x14(sp)[0m                      [39m  [39m27b8: [93m~>[39m[39m lw      ra,0x14(sp)[0m
[39m27c8:    addiu   sp,sp,0x20[0m                       [39m  [39m27bc:    addiu   sp,sp,0x20[0m
[39m27cc:    jr      ra[0m                               [39m  [39m27c0:    jr      ra[0m
[39m27d0:    nop[0m                                      [39m  [39m27c4:    nop[0m
[39m27d4:    lb      t6,1(a0)[0m                         [39m  [39m27c8:    lb      t6,1(a0)[0m
[39m27d8:    slti    at,t6,0x15[0m                       [39m  [39m27cc:    slti    at,t6,0x15[0m
[39m27dc:    bnezl   at,280c[0m [92m~>[39m                       [39m  [39m27d0:    bnezl   at,2800[0m [96m~>[39m
[39m27e0:    lbu     v0,2(a0)[0m                         [39m  [39m27d4:    lbu     v0,2(a0)[0m
[39m27e4:    lbu     v0,2(a0)[0m                         [39m  [39m27d8:    lbu     v0,2(a0)[0m
[39m27e8:    li      t8,0x87[0m                          [39m  [39m27dc:    li      t8,0x87[0m
[39m27ec:    slti    at,v0,0x7d[0m                       [39m  [39m27e0:    slti    at,v0,0x7d[0m
[39m27f0:    beqz    at,2800[0m [90m~>[39m                       [39m  [39m27e4:    beqz    at,27f4[0m [92m~>[39m
[39m27f4:    addiu   t7,v0,0xa[0m                        [39m  [39m27e8:    addiu   t7,v0,0xa[0m
[39m27f8:    jr      ra[0m                               [39m  [39m27ec:    jr      ra[0m
[39m27fc:    sb      t7,2(a0)[0m                         [39m  [39m27f0:    sb      t7,2(a0)[0m
[39m2800: [90m~>[39m[39m jr      ra[0m                               [39m  [39m27f4: [92m~>[39m[39m jr      ra[0m
[39m2804:    sb      t8,2(a0)[0m                         [39m  [39m27f8:    sb      t8,2(a0)[0m
[39m2808: [92m~>[39m[39m lbu     v0,2(a0)[0m                         [39m  [39m27fc: [96m~>[39m[39m lbu     v0,2(a0)[0m
[39m280c:    slti    at,v0,0xe[0m                        [39m  [39m2800:    slti    at,v0,0xe[0m
[39m2810:    bnez    at,2820[0m [35m~>[39m                       [39m  [39m2804:    bnez    at,2814[0m [90m~>[39m
[39m2814:    addiu   t9,v0,-0xd[0m                       [39m  [39m2808:    addiu   t9,v0,-0xd[0m
[39m2818:    jr      ra[0m                               [39m  [39m280c:    jr      ra[0m
[39m281c:    sb      t9,2(a0)[0m                         [39m  [39m2810:    sb      t9,2(a0)[0m
[39m2820: [35m~>[39m[39m sb      zero,2(a0)[0m                       [39m  [39m2814: [90m~>[39m[39m sb      zero,2(a0)[0m
[39m2824:    jr      ra[0m                               [39m  [39m2818:    jr      ra[0m
[39m2828:    nop[0m                                      [39m  [39m281c:    nop[0m
[39m282c:    addiu   sp,sp,-0x30[0m                      [39m  [39m2820:    addiu   sp,sp,-0x30[0m
[39m2830:    sw      ra,0x2c(sp)[0m                      [39m  [39m2824:    sw      ra,0x2c(sp)[0m
[39m2834:    sw      s4,0x28(sp)[0m                      [39m  [39m2828:    sw      s4,0x28(sp)[0m
[39m2838:    sw      s3,0x24(sp)[0m                      [39m  [39m282c:    sw      s3,0x24(sp)[0m
[39m283c:    sw      s2,0x20(sp)[0m                      [39m  [39m2830:    sw      s2,0x20(sp)[0m
[39m2840:    sw      s1,0x1c(sp)[0m                      [39m  [39m2834:    sw      s1,0x1c(sp)[0m
[39m2844:    sw      s0,0x18(sp)[0m                      [39m  [39m2838:    sw      s0,0x18(sp)[0m
[39m2848:    lui     s0,%hi(D_80B50350)[0m               [39m  [39m283c:    lui     s0,%hi(D_80B50350)[0m
[39m284c:    lui     s2,%hi(D_80B4EC20)[0m               [39m  [39m2840:    lui     s2,%hi(D_80B4EC20)[0m
[39m2850:    move    s4,zero[0m                          [39m  [39m2844:    move    s4,zero[0m
[39m2854:    addiu   s2,s2,%lo(D_80B4EC20)[0m            [39m  [39m2848:    addiu   s2,s2,%lo(D_80B4EC20)[0m
[39m2858:    addiu   s0,s0,%lo(D_80B50350)[0m            [39m  [39m284c:    addiu   s0,s0,%lo(D_80B50350)[0m
[39m285c:    move    s1,zero[0m                          [39m  [39m2850:    move    s1,zero[0m
[39m2860:    li      s3,0xa[0m                           [39m  [39m2854:    li      s3,0xa[0m
[39m2864: [32m~>[39m[39m lb      t6,1(s0)[0m                         [39m  [39m2858: [36m~>[39m[39m lb      t6,1(s0)[0m
[39m2868:    blezl   t6,28a0[0m [36m~>[39m                       [39m  [39m285c:    blezl   t6,2894[0m [35m~>[39m
[39m286c:    addiu   s1,s1,1[0m                          [39m  [39m2860:    addiu   s1,s1,1[0m
[39m2870:    lb      t7,0(s0)[0m                         [39m  [39m2864:    lb      t7,0(s0)[0m
[39m2874:    move    a0,s0[0m                            [39m  [39m2868:    move    a0,s0[0m
[39m2878:    li      s4,1[0m                             [39m  [39m286c:    li      s4,1[0m
[39m287c:    sll     t8,t7,0x2[0m                        [39m  [39m2870:    sll     t8,t7,0x2[0m
[39m2880:    addu    t9,s2,t8[0m                         [39m  [39m2874:    addu    t9,s2,t8[0m
[39m2884:    lw      t9,0(t9)[0m                         [39m  [39m2878:    lw      t9,0(t9)[0m
[39m2888:    jalr    t9[0m                               [39m  [39m287c:    jalr    t9[0m
[39m288c:    nop[0m                                      [39m  [39m2880:    nop[0m
[39m2890:    lb      t0,1(s0)[0m                         [39m  [39m2884:    lb      t0,1(s0)[0m
[39m2894:    addiu   t1,t0,-1[0m                         [39m  [39m2888:    addiu   t1,t0,-1[0m
[39m2898:    sb      t1,1(s0)[0m                         [39m  [39m288c:    sb      t1,1(s0)[0m
[39m289c: [36m~>[39m[39m addiu   s1,s1,1[0m                          [39m  [39m2890: [35m~>[39m[39m addiu   s1,s1,1[0m
[39m28a0:    bne     s1,s3,2864[0m [32m~>[39m                    [39m  [39m2894:    bne     s1,s3,2858[0m [36m~>[39m
[39m28a4:    addiu   s0,s0,0x10[0m                       [39m  [39m2898:    addiu   s0,s0,0x10[0m
[39m28a8:    move    v0,s4[0m                            [39m  [39m289c:    move    v0,s4[0m
[39m28ac:    lw      ra,0x2c(sp)[0m                      [39m  [39m28a0:    lw      ra,0x2c(sp)[0m
[39m28b0:    lw      s0,0x18(sp)[0m                      [39m  [39m28a4:    lw      s0,0x18(sp)[0m
[39m28b4:    lw      s1,0x1c(sp)[0m                      [39m  [39m28a8:    lw      s1,0x1c(sp)[0m
[39m28b8:    lw      s2,0x20(sp)[0m                      [39m  [39m28ac:    lw      s2,0x20(sp)[0m
[39m28bc:    lw      s3,0x24(sp)[0m                      [39m  [39m28b0:    lw      s3,0x24(sp)[0m
[39m28c0:    lw      s4,0x28(sp)[0m                      [39m  [39m28b4:    lw      s4,0x28(sp)[0m
[39m28c4:    jr      ra[0m                               [39m  [39m28b8:    jr      ra[0m
[39m28c8:    addiu   sp,sp,0x30[0m                       [39m  [39m28bc:    addiu   sp,sp,0x30[0m
[39m28cc:    addiu   sp,sp,-0x20[0m                      [39m  [39m28c0:    addiu   sp,sp,-0x20[0m
[39m28d0:    sw      s0,0x18(sp)[0m                      [39m  [39m28c4:    sw      s0,0x18(sp)[0m
[39m28d4:    move    s0,a0[0m                            [39m  [39m28c8:    move    s0,a0[0m
[39m28d8:    sw      ra,0x1c(sp)[0m                      [39m  [39m28cc:    sw      ra,0x1c(sp)[0m
[39m28dc:    sw      a1,0x24(sp)[0m                      [39m  [39m28d0:    sw      a1,0x24(sp)[0m
[39m28e0:    lw      t6,4(s0)[0m                         [39m  [39m28d4:    lw      t6,4(s0)[0m
[39m28e4:    lh      v1,0x1c(s0)[0m                      [39m  [39m28d8:    lh      v1,0x1c(s0)[0m
[39m28e8:    lui     a3,0x2[0m                           [39m  [39m28dc:    lui     a3,0x2[0m
[39m28ec:    ori     t7,t6,0x20[0m                       [39m  [39m28e0:    ori     t7,t6,0x20[0m
[39m28f0:    sw      t7,4(s0)[0m                         [39m  [39m28e4:    sw      t7,4(s0)[0m
[39m28f4:    lw      t8,0x24(sp)[0m                      [39m  [39m28e8:    lw      t8,0x24(sp)[0m
[39m28f8:    sra     v1,v1,0x8[0m                        [39m  [39m28ec:    sra     v1,v1,0x8[0m
[39m28fc:    andi    v1,v1,0x7f[0m                       [39m  [39m28f0:    andi    v1,v1,0x7f[0m
[39m2900:    addu    a3,a3,t8[0m                         [39m  [39m28f4:    addu    a3,a3,t8[0m
[39m2904:    lw      a3,-0x779c(a3)[0m                   [39m  [39m28f8:    lw      a3,-0x779c(a3)[0m
[39m2908:    li      a2,1[0m                             [39m  [39m28fc:    li      a2,1[0m
[39m290c:    li      a1,8[0m                             [39m  [39m2900:    li      a1,8[0m
[39m2910:    li      a0,0xff[0m                          [39m  [39m2904:    li      a0,0xff[0m
[39m2914: [93m~>[39m[39m sll     t9,v1,0x3[0m                        [39m  [39m2908: [31m~>[39m[39m sll     t9,v1,0x3[0m
[39m2918:    addu    v0,a3,t9[0m                         [39m  [39m290c:    addu    v0,a3,t9[0m
[39m291c:    lbu     v1,1(v0)[0m                         [39m  [39m2910:    lbu     v1,1(v0)[0m
[39m2920:    beql    v1,a0,2938[0m [31m~>[39m                    [39m  [39m2914:    beql    v1,a0,292c[0m [32m~>[39m
[39m2924:    sb      a2,0x379(s0)[0m                     [39m  [39m2918:    sb      a2,0x379(s0)[0m
[39m2928:    addiu   a2,a2,1[0m                          [39m  [39m291c:    addiu   a2,a2,1[0m
[39m292c:    bnel    a2,a1,2918[0m [93m~>[39m                    [39m  [39m2920:    bnel    a2,a1,290c[0m [31m~>[39m
[39m2930:    sll     t9,v1,0x3[0m                        [39m  [39m2924:    sll     t9,v1,0x3[0m
[39m2934: [31m~>[39m[39m sb      a2,0x379(s0)[0m                     [39m  [39m2928: [32m~>[39m[39m sb      a2,0x379(s0)[0m
[39m2938:    lw      a1,0x24(sp)[0m                      [39m  [39m292c:    lw      a1,0x24(sp)[0m
[39m293c:    jal     func_80B451A0[0m                    [39m  [39m2930:    jal     func_80B451A0[0m
[39m2940:    move    a0,s0[0m                            [39m  [39m2934:    move    a0,s0[0m
[39m2944:    jal     func_80B45648[0m                    [39m  [39m2938:    jal     func_80B45648[0m
[39m2948:    move    a0,s0[0m                            [39m  [39m293c:    move    a0,s0[0m
[39m294c:    lw      a0,0x24(sp)[0m                      [39m  [39m2940:    lw      a0,0x24(sp)[0m
[39m2950:    move    a2,s0[0m                            [39m  [39m2944:    move    a2,s0[0m
[39m2954:    move    a3,zero[0m                          [39m  [39m2948:    move    a3,zero[0m
[39m2958:    jal     func_800BC154[0m                    [39m  [39m294c:    jal     func_800BC154[0m
[39m295c:    addiu   a1,a0,0x1ca0[0m                     [39m  [39m2950:    addiu   a1,a0,0x1ca0[0m
[39m2960:    lui     v0,%hi(D_80B4E940)[0m               [39m  [39m2954:    lui     v0,%hi(D_80B4E940)[0m
[39m2964:    lw      v0,%lo(D_80B4E940)(v0)[0m           [39m  [39m2958:    lw      v0,%lo(D_80B4E940)(v0)[0m
[39m2968:    li      at,1[0m                             [39m  [39m295c:    li      at,1[0m
[39m296c:    bnel    v0,at,2988[0m [95m~>[39m                    [39m  [39m2960:    bnel    v0,at,297c[0m [93m~>[39m
[39m2970:    li      at,2[0m                             [39m  [39m2964:    li      at,2[0m
[39m2974:    jal     func_80B46DA8[0m                    [39m  [39m2968:    jal     func_80B46DA8[0m
[39m2978:    move    a0,s0[0m                            [39m  [39m296c:    move    a0,s0[0m
[39m297c:    b       2a54[0m [96m~>[39m                          [39m  [39m2970:    b       2a48[0m [95m~>[39m
[39m2980:    lw      ra,0x1c(sp)[0m                      [39m  [39m2974:    lw      ra,0x1c(sp)[0m
[39m2984: [95m~>[39m[39m li      at,2[0m                             [39m  [39m2978: [93m~>[39m[39m li      at,2[0m
[39m2988:    bne     v0,at,29e0[0m [92m~>[39m                    [39m  [39m297c:    bne     v0,at,29d4[0m [96m~>[39m
[39m298c:    lui     t0,%hi(gSaveContext)[0m             [39m  [39m2980:    lui     t0,%hi(gSaveContext)[0m
[39m2990:    lhu     t0,%lo(gSaveContext+0xc)(t0)[0m     [39m  [39m2984:    lhu     t0,%lo(gSaveContext+0xc)(t0)[0m
[39m2994:    move    a0,s0[0m                            [39m  [39m2988:    move    a0,s0[0m
[39m2998:    slti    at,t0,0x1ad8[0m                     [39m  [39m298c:    slti    at,t0,0x1ad8[0m
[39m299c:    beqz    at,29b4[0m [90m~>[39m                       [39m  [39m2990:    beqz    at,29a8[0m [92m~>[39m
[39m29a0:    nop[0m                                      [39m  [39m2994:    nop[0m
[39m29a4:    jal     func_80B46DA8[0m                    [39m  [39m2998:    jal     func_80B46DA8[0m
[39m29a8:    move    a0,s0[0m                            [39m  [39m299c:    move    a0,s0[0m
[39m29ac:    b       2a54[0m [96m~>[39m                          [39m  [39m29a0:    b       2a48[0m [95m~>[39m
[39m29b0:    lw      ra,0x1c(sp)[0m                      [39m  [39m29a4:    lw      ra,0x1c(sp)[0m
[39m29b4: [90m~>[39m[39m jal     func_80B454BC[0m                    [39m  [39m29a8: [92m~>[39m[39m jal     func_80B454BC[0m
[39m29b8:    lw      a1,0x24(sp)[0m                      [39m  [39m29ac:    lw      a1,0x24(sp)[0m
[39m29bc:    move    a0,s0[0m                            [39m  [39m29b0:    move    a0,s0[0m
[39m29c0:    jal     func_80B452EC[0m                    [39m  [39m29b4:    jal     func_80B452EC[0m
[39m29c4:    lw      a1,0x24(sp)[0m                      [39m  [39m29b8:    lw      a1,0x24(sp)[0m
[39m29c8:    jal     func_801A89A8[0m                    [39m  [39m29bc:    jal     func_801A89A8[0m
[39m29cc:    li      a0,0x800d[0m                        [39m  [39m29c0:    li      a0,0x800d[0m
[39m29d0:    jal     func_80B46F88[0m                    [39m  [39m29c4:    jal     func_80B46F88[0m
[39m29d4:    move    a0,s0[0m                            [39m  [39m29c8:    move    a0,s0[0m
[39m29d8:    b       2a54[0m [96m~>[39m                          [39m  [39m29cc:    b       2a48[0m [95m~>[39m
[39m29dc:    lw      ra,0x1c(sp)[0m                      [39m  [39m29d0:    lw      ra,0x1c(sp)[0m
[39m29e0: [92m~>[39m[39m li      at,3[0m                             [39m  [39m29d4: [96m~>[39m[39m li      at,3[0m
[39m29e4:    bnel    v0,at,2a40[0m [35m~>[39m                    [39m  [39m29d8:    bnel    v0,at,2a34[0m [90m~>[39m
[39m29e8:    li      at,4[0m                             [39m  [39m29dc:    li      at,4[0m
[39m29ec:    lui     v0,%hi(gSaveContext)[0m             [39m  [39m29e0:    lui     v0,%hi(gSaveContext)[0m
[39m29f0:    lw      v0,%lo(gSaveContext)(v0)[0m         [39m  [39m29e4:    lw      v0,%lo(gSaveContext)(v0)[0m
[39m29f4:    li      at,0x6460[0m                        [39m  [39m29e8:    li      at,0x6460[0m
[39m29f8:    bnel    v0,at,2a14[0m [36m~>[39m                    [39m  [39m29ec:    bnel    v0,at,2a08[0m [35m~>[39m
[39m29fc:    li      at,0x6470[0m                        [39m  [39m29f0:    li      at,0x6470[0m
[39m2a00:    jal     func_80B471C0[0m                    [39m  [39m29f4:    jal     func_80B471C0[0m
[39m2a04:    move    a0,s0[0m                            [39m  [39m29f8:    move    a0,s0[0m
[39m2a08:    b       2a54[0m [96m~>[39m                          [39m  [39m29fc:    b       2a48[0m [95m~>[39m
[39m2a0c:    lw      ra,0x1c(sp)[0m                      [39m  [39m2a00:    lw      ra,0x1c(sp)[0m
[39m2a10: [36m~>[39m[39m li      at,0x6470[0m                        [39m  [39m2a04: [35m~>[39m[39m li      at,0x6470[0m
[39m2a14:    bne     v0,at,2a2c[0m [32m~>[39m                    [39m  [39m2a08:    bne     v0,at,2a20[0m [36m~>[39m
[39m2a18:    nop[0m                                      [39m  [39m2a0c:    nop[0m
[39m2a1c:    jal     func_80B47248[0m                    [39m  [39m2a10:    jal     func_80B47248[0m
[39m2a20:    move    a0,s0[0m                            [39m  [39m2a14:    move    a0,s0[0m
[39m2a24:    b       2a54[0m [96m~>[39m                          [39m  [39m2a18:    b       2a48[0m [95m~>[39m
[39m2a28:    lw      ra,0x1c(sp)[0m                      [39m  [39m2a1c:    lw      ra,0x1c(sp)[0m
[39m2a2c: [32m~>[39m[39m jal     func_80B47248[0m                    [39m  [39m2a20: [36m~>[39m[39m jal     func_80B47248[0m
[39m2a30:    move    a0,s0[0m                            [39m  [39m2a24:    move    a0,s0[0m
[39m2a34:    b       2a54[0m [96m~>[39m                          [39m  [39m2a28:    b       2a48[0m [95m~>[39m
[39m2a38:    lw      ra,0x1c(sp)[0m                      [39m  [39m2a2c:    lw      ra,0x1c(sp)[0m
[39m2a3c: [35m~>[39m[39m li      at,4[0m                             [39m  [39m2a30: [90m~>[39m[39m li      at,4[0m
[39m2a40:    bnel    v0,at,2a54[0m [31m~>[39m                    [39m  [39m2a34:    bnel    v0,at,2a48[0m [32m~>[39m
[39m2a44:    lw      ra,0x1c(sp)[0m                      [39m  [39m2a38:    lw      ra,0x1c(sp)[0m
[39m2a48:    jal     func_80B47304[0m                    [39m  [39m2a3c:    jal     func_80B47304[0m
[39m2a4c:    move    a0,s0[0m                            [39m  [39m2a40:    move    a0,s0[0m
[39m2a50: [31m~>[39m[39m lw      ra,0x1c(sp)[0m                      [39m  [39m2a44: [32m~>[39m[39m lw      ra,0x1c(sp)[0m
[39m2a54: [96m~>[39m[39m lw      s0,0x18(sp)[0m                      [39m  [39m2a48: [95m~>[39m[39m lw      s0,0x18(sp)[0m
[39m2a58:    addiu   sp,sp,0x20[0m                       [39m  [39m2a4c:    addiu   sp,sp,0x20[0m
[39m2a5c:    jr      ra[0m                               [39m  [39m2a50:    jr      ra[0m
[39m2a60:    nop[0m                                      [39m  [39m2a54:    nop[0m
[39m2a64:    addiu   sp,sp,-0x28[0m                      [39m  [39m2a58:    addiu   sp,sp,-0x28[0m
[39m2a68:    sw      s0,0x18(sp)[0m                      [39m  [39m2a5c:    sw      s0,0x18(sp)[0m
[39m2a6c:    move    s0,a0[0m                            [39m  [39m2a60:    move    s0,a0[0m
[39m2a70:    sw      ra,0x1c(sp)[0m                      [39m  [39m2a64:    sw      ra,0x1c(sp)[0m
[39m2a74:    sw      a1,0x2c(sp)[0m                      [39m  [39m2a68:    sw      a1,0x2c(sp)[0m
[39m2a78:    lui     a1,%hi(D_80B4EC24)[0m               [39m  [39m2a6c:    lui     a1,%hi(D_80B4EC24)[0m
[39m2a7c:    addiu   a1,a1,%lo(D_80B4EC24)[0m            [39m  [39m2a70:    addiu   a1,a1,%lo(D_80B4EC24)[0m
[39m2a80:    jal     Actor_ProcessInitChain[0m           [39m  [39m2a74:    jal     Actor_ProcessInitChain[0m
[39m2a84:    move    a0,s0[0m                            [39m  [39m2a78:    move    a0,s0[0m
[39m2a88:    addiu   a1,s0,0x2a0[0m                      [39m  [39m2a7c:    addiu   a1,s0,0x2a0[0m
[39m2a8c:    sw      a1,0x20(sp)[0m                      [39m  [39m2a80:    sw      a1,0x20(sp)[0m
[39m2a90:    jal     Collider_InitCylinder[0m            [39m  [39m2a84:    jal     Collider_InitCylinder[0m
[39m2a94:    lw      a0,0x2c(sp)[0m                      [39m  [39m2a88:    lw      a0,0x2c(sp)[0m
[39m2a98:    lui     a1,0x45d4[0m                        [39m  [39m2a8c:    lui     a1,0x45d4[0m
[39m2a9c:    lui     a2,%hi(func_800B4088)[0m            [39m  [39m2a90:    lui     a2,%hi(func_800B4088)[0m
[39m2aa0:    addiu   a2,a2,%lo(func_800B4088)[0m         [39m  [39m2a94:    addiu   a2,a2,%lo(func_800B4088)[0m
[39m2aa4:    ori     a1,a1,0x8000[0m                     [39m  [39m2a98:    ori     a1,a1,0x8000[0m
[39m2aa8:    addiu   a0,s0,0xbc[0m                       [39m  [39m2a9c:    addiu   a0,s0,0xbc[0m
[39m2aac:    jal     ActorShape_Init[0m                  [39m  [39m2aa0:    jal     ActorShape_Init[0m
[39m2ab0:    lui     a3,0x4316[0m                        [39m  [39m2aa4:    lui     a3,0x4316[0m
[39m2ab4:    lh      t8,0x1c(s0)[0m                      [39m  [39m2aa8:    lh      t8,0x1c(s0)[0m
[39m2ab8:    lui     t7,0x8000[0m                        [39m  [39m2aac:    lui     t7,0x8000[0m
[39m2abc:    li      t6,0x8c[0m                          [39m  [39m2ab0:    li      t6,0x8c[0m
[39m2ac0:    sra     t9,t8,0x4[0m                        [39m  [39m2ab4:    sra     t9,t8,0x4[0m
[39m2ac4:    ori     t7,t7,0x1010[0m                     [39m  [39m2ab8:    ori     t7,t7,0x1010[0m
[39m2ac8:    andi    t0,t9,0xf[0m                        [39m  [39m2abc:    andi    t0,t9,0xf[0m
[39m2acc:    li      at,0xd[0m                           [39m  [39m2ac0:    li      at,0xd[0m
[39m2ad0:    sb      t6,0xd0(s0)[0m                      [39m  [39m2ac4:    sb      t6,0xd0(s0)[0m
[39m2ad4:    bne     t0,at,2b00[0m [93m~>[39m                    [39m  [39m2ac8:    bne     t0,at,2af4[0m [31m~>[39m
[39m2ad8:    sw      t7,4(s0)[0m                         [39m  [39m2acc:    sw      t7,4(s0)[0m
[39m2adc:    lui     at,0x4316[0m                        [39m  [39m2ad0:    lui     at,0x4316[0m
[39m2ae0:    mtc1    at,$f6[0m                           [39m  [39m2ad4:    mtc1    at,$f6[0m
[39m2ae4:    lwc1    $f4,0xc(s0)[0m                      [39m  [39m2ad8:    lwc1    $f4,0xc(s0)[0m
[39m2ae8:    lui     t1,%hi(func_80B4D670)[0m            [39m  [39m2adc:    lui     t1,%hi(func_80B4D670)[0m
[39m2aec:    addiu   t1,t1,%lo(func_80B4D670)[0m         [39m  [39m2ae0:    addiu   t1,t1,%lo(func_80B4D670)[0m
[39m2af0:    add.s   $f8,$f4,$f6[0m                      [39m  [39m2ae4:    add.s   $f8,$f4,$f6[0m
[39m2af4:    sw      t1,0x138(s0)[0m                     [39m  [39m2ae8:    sw      t1,0x138(s0)[0m
[39m2af8:    b       2b2c[0m [95m~>[39m                          [39m  [39m2aec:    b       2b20[0m [93m~>[39m
[39m2afc:    swc1    $f8,0x28(s0)[0m                     [39m  [39m2af0:    swc1    $f8,0x28(s0)[0m
[39m2b00: [93m~>[39m[39m lui     t2,%hi(func_80B47BAC)[0m            [39m  [39m2af4: [31m~>[39m[39m lui     t2,%hi(func_80B47BAC)[0m
[39m2b04:    addiu   t2,t2,%lo(func_80B47BAC)[0m         [39m  [39m2af8:    addiu   t2,t2,%lo(func_80B47BAC)[0m
[39m2b08:    sw      t2,0x138(s0)[0m                     [39m  [39m2afc:    sw      t2,0x138(s0)[0m
[39m2b0c:    lui     a3,%hi(D_80B4E8B0)[0m               [39m  [39m2b00:    lui     a3,%hi(D_80B4E8B0)[0m
[39m2b10:    addiu   a3,a3,%lo(D_80B4E8B0)[0m            [39m  [39m2b04:    addiu   a3,a3,%lo(D_80B4E8B0)[0m
[39m2b14:    lw      a1,0x20(sp)[0m                      [39m  [39m2b08:    lw      a1,0x20(sp)[0m
[39m2b18:    lw      a0,0x2c(sp)[0m                      [39m  [39m2b0c:    lw      a0,0x2c(sp)[0m
[39m2b1c:    jal     Collider_SetCylinder[0m             [39m  [39m2b10:    jal     Collider_SetCylinder[0m
[39m2b20:    move    a2,s0[0m                            [39m  [39m2b14:    move    a2,s0[0m
[39m2b24:    li      t3,0x28[0m                          [39m  [39m2b18:    li      t3,0x28[0m
[39m2b28:    sb      t3,0xb6(s0)[0m                      [39m  [39m2b1c:    sb      t3,0xb6(s0)[0m
[39m2b2c: [95m~>[39m[39m lw      a0,0x2c(sp)[0m                      [39m  [39m2b20: [93m~>[39m[39m lw      a0,0x2c(sp)[0m
[39m2b30:    lui     at,0x1[0m                           [39m  [39m2b24:    lui     at,0x1[0m
[39m2b34:    ori     at,at,0x7d88[0m                     [39m  [39m2b28:    ori     at,at,0x7d88[0m
[39m2b38:    li      a1,0x23e[0m                         [39m  [39m2b2c:    li      a1,0x23e[0m
[39m2b3c:    jal     Object_GetIndex[0m                  [39m  [39m2b30:    jal     Object_GetIndex[0m
[39m2b40:    addu    a0,a0,at[0m                         [39m  [39m2b34:    addu    a0,a0,at[0m
[39m2b44:    sb      v0,0x2f4(s0)[0m                     [39m  [39m2b38:    sb      v0,0x2f4(s0)[0m
[39m2b48:    lb      t4,0x2f4(s0)[0m                     [39m  [39m2b3c:    lb      t4,0x2f4(s0)[0m
[39m2b4c:    bgezl   t4,2b60[0m [96m~>[39m                       [39m  [39m2b40:    bgezl   t4,2b54[0m [95m~>[39m
[39m2b50:    lw      ra,0x1c(sp)[0m                      [39m  [39m2b44:    lw      ra,0x1c(sp)[0m
[39m2b54:    jal     Actor_MarkForDeath[0m               [39m  [39m2b48:    jal     Actor_MarkForDeath[0m
[39m2b58:    move    a0,s0[0m                            [39m  [39m2b4c:    move    a0,s0[0m
[39m2b5c: [96m~>[39m[39m lw      ra,0x1c(sp)[0m                      [39m  [39m2b50: [95m~>[39m[39m lw      ra,0x1c(sp)[0m
[39m2b60:    lw      s0,0x18(sp)[0m                      [39m  [39m2b54:    lw      s0,0x18(sp)[0m
[39m2b64:    addiu   sp,sp,0x28[0m                       [39m  [39m2b58:    addiu   sp,sp,0x28[0m
[39m2b68:    jr      ra[0m                               [39m  [39m2b5c:    jr      ra[0m
[39m2b6c:    nop[0m                                      [39m  [39m2b60:    nop[0m
[39m2b70:    addiu   sp,sp,-0x40[0m                      [39m  [39m2b64:    addiu   sp,sp,-0x40[0m
[39m2b74:    sw      s0,0x38(sp)[0m                      [39m  [39m2b68:    sw      s0,0x38(sp)[0m
[39m2b78:    move    s0,a0[0m                            [39m  [39m2b6c:    move    s0,a0[0m
[39m2b7c:    sw      ra,0x3c(sp)[0m                      [39m  [39m2b70:    sw      ra,0x3c(sp)[0m
[39m2b80:    sw      a1,0x44(sp)[0m                      [39m  [39m2b74:    sw      a1,0x44(sp)[0m
[39m2b84:    lui     a1,%hi(D_80B4EC34)[0m               [39m  [39m2b78:    lui     a1,%hi(D_80B4EC34)[0m
[39m2b88:    addiu   a1,a1,%lo(D_80B4EC34)[0m            [39m  [39m2b7c:    addiu   a1,a1,%lo(D_80B4EC34)[0m
[39m2b8c:    jal     Actor_ProcessInitChain[0m           [39m  [39m2b80:    jal     Actor_ProcessInitChain[0m
[39m2b90:    move    a0,s0[0m                            [39m  [39m2b84:    move    a0,s0[0m
[39m2b94:    lui     t6,%hi(func_80B47FA8)[0m            [39m  [39m2b88:    lui     t6,%hi(func_80B47FA8)[0m
[39m2b98:    lw      a2,0x44(sp)[0m                      [39m  [39m2b8c:    lw      a2,0x44(sp)[0m
[39m2b9c:    addiu   t6,t6,%lo(func_80B47FA8)[0m         [39m  [39m2b90:    addiu   t6,t6,%lo(func_80B47FA8)[0m
[39m2ba0:    sw      t6,0x138(s0)[0m                     [39m  [39m2b94:    sw      t6,0x138(s0)[0m
[39m2ba4:    mtc1    zero,$f0[0m                         [39m  [39m2b98:    mtc1    zero,$f0[0m
[39m2ba8:    li      t7,0x30[0m                          [39m  [39m2b9c:    li      t7,0x30[0m
[39m2bac:    sw      t7,0x28(sp)[0m                      [39m  [39m2ba0:    sw      t7,0x28(sp)[0m
[39m2bb0:    sw      zero,0x24(sp)[0m                    [39m  [39m2ba4:    sw      zero,0x24(sp)[0m
[39m2bb4:    sw      zero,0x20(sp)[0m                    [39m  [39m2ba8:    sw      zero,0x20(sp)[0m
[39m2bb8:    sw      zero,0x1c(sp)[0m                    [39m  [39m2bac:    sw      zero,0x1c(sp)[0m
[39m2bbc:    move    a1,s0[0m                            [39m  [39m2bb0:    move    a1,s0[0m
[39m2bc0:    li      a3,0x200[0m                         [39m  [39m2bb4:    li      a3,0x200[0m
[39m2bc4:    addiu   a0,a2,0x1ca0[0m                     [39m  [39m2bb8:    addiu   a0,a2,0x1ca0[0m
[39m2bc8:    swc1    $f0,0x10(sp)[0m                     [39m  [39m2bbc:    swc1    $f0,0x10(sp)[0m
[39m2bcc:    swc1    $f0,0x14(sp)[0m                     [39m  [39m2bc0:    swc1    $f0,0x14(sp)[0m
[39m2bd0:    jal     Actor_SpawnWithParent[0m            [39m  [39m2bc4:    jal     Actor_SpawnWithParent[0m
[39m2bd4:    swc1    $f0,0x18(sp)[0m                     [39m  [39m2bc8:    swc1    $f0,0x18(sp)[0m
[39m2bd8:    lw      a0,0x44(sp)[0m                      [39m  [39m2bcc:    lw      a0,0x44(sp)[0m
[39m2bdc:    lui     at,0x1[0m                           [39m  [39m2bd0:    lui     at,0x1[0m
[39m2be0:    ori     at,at,0x7d88[0m                     [39m  [39m2bd4:    ori     at,at,0x7d88[0m
[39m2be4:    li      a1,0x146[0m                         [39m  [39m2bd8:    li      a1,0x146[0m
[39m2be8:    jal     Object_GetIndex[0m                  [39m  [39m2bdc:    jal     Object_GetIndex[0m
[39m2bec:    addu    a0,a0,at[0m                         [39m  [39m2be0:    addu    a0,a0,at[0m
[39m2bf0:    sb      v0,0x2f4(s0)[0m                     [39m  [39m2be4:    sb      v0,0x2f4(s0)[0m
[39m2bf4:    lb      t8,0x2f4(s0)[0m                     [39m  [39m2be8:    lb      t8,0x2f4(s0)[0m
[39m2bf8:    bgezl   t8,2c0c[0m [92m~>[39m                       [39m  [39m2bec:    bgezl   t8,2c00[0m [96m~>[39m
[39m2bfc:    lw      ra,0x3c(sp)[0m                      [39m  [39m2bf0:    lw      ra,0x3c(sp)[0m
[39m2c00:    jal     Actor_MarkForDeath[0m               [39m  [39m2bf4:    jal     Actor_MarkForDeath[0m
[39m2c04:    move    a0,s0[0m                            [39m  [39m2bf8:    move    a0,s0[0m
[39m2c08: [92m~>[39m[39m lw      ra,0x3c(sp)[0m                      [39m  [39m2bfc: [96m~>[39m[39m lw      ra,0x3c(sp)[0m
[39m2c0c:    lw      s0,0x38(sp)[0m                      [39m  [39m2c00:    lw      s0,0x38(sp)[0m
[39m2c10:    addiu   sp,sp,0x40[0m                       [39m  [39m2c04:    addiu   sp,sp,0x40[0m
[39m2c14:    jr      ra[0m                               [39m  [39m2c08:    jr      ra[0m
[39m2c18:    nop[0m                                      [39m  [39m2c0c:    nop[0m
[39m2c1c:    addiu   sp,sp,-0x18[0m                      [39m  [39m2c10:    addiu   sp,sp,-0x18[0m
[39m2c20:    sw      ra,0x14(sp)[0m                      [39m  [39m2c14:    sw      ra,0x14(sp)[0m
[39m2c24:    sw      a1,0x1c(sp)[0m                      [39m  [39m2c18:    sw      a1,0x1c(sp)[0m
[39m2c28:    move    a2,a0[0m                            [39m  [39m2c1c:    move    a2,a0[0m
[39m2c2c:    lui     a1,%hi(D_80B4EC44)[0m               [39m  [39m2c20:    lui     a1,%hi(D_80B4EC44)[0m
[39m2c30:    addiu   a1,a1,%lo(D_80B4EC44)[0m            [39m  [39m2c24:    addiu   a1,a1,%lo(D_80B4EC44)[0m
[39m2c34:    move    a0,a2[0m                            [39m  [39m2c28:    move    a0,a2[0m
[39m2c38:    jal     Actor_ProcessInitChain[0m           [39m  [39m2c2c:    jal     Actor_ProcessInitChain[0m
[39m2c3c:    sw      a2,0x18(sp)[0m                      [39m  [39m2c30:    sw      a2,0x18(sp)[0m
[39m2c40:    lw      a2,0x18(sp)[0m                      [39m  [39m2c34:    lw      a2,0x18(sp)[0m
[39m2c44:    lui     t6,%hi(func_80B481C4)[0m            [39m  [39m2c38:    lui     t6,%hi(func_80B481C4)[0m
[39m2c48:    addiu   t6,t6,%lo(func_80B481C4)[0m         [39m  [39m2c3c:    addiu   t6,t6,%lo(func_80B481C4)[0m
[39m2c4c:    sw      t6,0x138(a2)[0m                     [39m  [39m2c40:    sw      t6,0x138(a2)[0m
[39m2c50:    lw      a0,0x1c(sp)[0m                      [39m  [39m2c44:    lw      a0,0x1c(sp)[0m
[39m2c54:    lui     at,0x1[0m                           [39m  [39m2c48:    lui     at,0x1[0m
[39m2c58:    ori     at,at,0x7d88[0m                     [39m  [39m2c4c:    ori     at,at,0x7d88[0m
[39m2c5c:    li      a1,0x146[0m                         [39m  [39m2c50:    li      a1,0x146[0m
[39m2c60:    jal     Object_GetIndex[0m                  [39m  [39m2c54:    jal     Object_GetIndex[0m
[39m2c64:    addu    a0,a0,at[0m                         [39m  [39m2c58:    addu    a0,a0,at[0m
[39m2c68:    lw      a2,0x18(sp)[0m                      [39m  [39m2c5c:    lw      a2,0x18(sp)[0m
[39m2c6c:    sb      v0,0x2f4(a2)[0m                     [39m  [39m2c60:    sb      v0,0x2f4(a2)[0m
[39m2c70:    lb      t7,0x2f4(a2)[0m                     [39m  [39m2c64:    lb      t7,0x2f4(a2)[0m
[39m2c74:    bgezl   t7,2c88[0m [90m~>[39m                       [39m  [39m2c68:    bgezl   t7,2c7c[0m [92m~>[39m
[39m2c78:    lw      ra,0x14(sp)[0m                      [39m  [39m2c6c:    lw      ra,0x14(sp)[0m
[39m2c7c:    jal     Actor_MarkForDeath[0m               [39m  [39m2c70:    jal     Actor_MarkForDeath[0m
[39m2c80:    move    a0,a2[0m                            [39m  [39m2c74:    move    a0,a2[0m
[39m2c84: [90m~>[39m[39m lw      ra,0x14(sp)[0m                      [39m  [39m2c78: [92m~>[39m[39m lw      ra,0x14(sp)[0m
[39m2c88:    addiu   sp,sp,0x18[0m                       [39m  [39m2c7c:    addiu   sp,sp,0x18[0m
[39m2c8c:    jr      ra[0m                               [39m  [39m2c80:    jr      ra[0m
[39m2c90:    nop[0m                                      [39m  [39m2c84:    nop[0m
[39m2c94:    addiu   sp,sp,-0x30[0m                      [39m  [39m2c88:    addiu   sp,sp,-0x30[0m
[39m2c98:    sw      s0,0x18(sp)[0m                      [39m  [39m2c8c:    sw      s0,0x18(sp)[0m
[39m2c9c:    move    s0,a0[0m                            [39m  [39m2c90:    move    s0,a0[0m
[39m2ca0:    sw      ra,0x1c(sp)[0m                      [39m  [39m2c94:    sw      ra,0x1c(sp)[0m
[39m2ca4:    sw      a1,0x34(sp)[0m                      [39m  [39m2c98:    sw      a1,0x34(sp)[0m
[39m2ca8:    lh      v1,0x1c(s0)[0m                      [39m  [39m2c9c:    lh      v1,0x1c(s0)[0m
[39m2cac:    lui     a1,%hi(D_80B4EC54)[0m               [39m  [39m2ca0:    lui     a1,%hi(D_80B4EC54)[0m
[39m2cb0:    addiu   a1,a1,%lo(D_80B4EC54)[0m            [39m  [39m2ca4:    addiu   a1,a1,%lo(D_80B4EC54)[0m
[39m2cb4:    sra     v1,v1,0x4[0m                        [39m  [39m2ca8:    sra     v1,v1,0x4[0m
[39m2cb8:    andi    v1,v1,0xf[0m                        [39m  [39m2cac:    andi    v1,v1,0xf[0m
[39m2cbc:    sw      v1,0x28(sp)[0m                      [39m  [39m2cb0:    sw      v1,0x28(sp)[0m
[39m2cc0:    jal     Actor_ProcessInitChain[0m           [39m  [39m2cb4:    jal     Actor_ProcessInitChain[0m
[39m2cc4:    move    a0,s0[0m                            [39m  [39m2cb8:    move    a0,s0[0m
[39m2cc8:    lw      v1,0x28(sp)[0m                      [39m  [39m2cbc:    lw      v1,0x28(sp)[0m
[39m2ccc:    li      at,7[0m                             [39m  [39m2cc0:    li      at,7[0m
[39m2cd0:    move    a2,s0[0m                            [39m  [39m2cc4:    move    a2,s0[0m
[39m2cd4:    beq     v1,at,2ce8[0m [35m~>[39m                    [39m  [39m2cc8:    beq     v1,at,2cdc[0m [90m~>[39m
[39m2cd8:    li      a3,4[0m                             [39m  [39m2ccc:    li      a3,4[0m
[39m2cdc:    li      at,0xc[0m                           [39m  [39m2cd0:    li      at,0xc[0m
[39m2ce0:    bne     v1,at,2cf4[0m [36m~>[39m                    [39m  [39m2cd4:    bne     v1,at,2ce8[0m [35m~>[39m
[39m2ce4:    li      t7,6[0m                             [39m  [39m2cd8:    li      t7,6[0m
[39m2ce8: [35m~>[39m[39m li      t6,3[0m                             [39m  [39m2cdc: [90m~>[39m[39m li      t6,3[0m
[39m2cec:    b       2cf8[0m [32m~>[39m                          [39m  [39m2ce0:    b       2cec[0m [36m~>[39m
[39m2cf0:    sb      t6,0x1f(s0)[0m                      [39m  [39m2ce4:    sb      t6,0x1f(s0)[0m
[39m2cf4: [36m~>[39m[39m sb      t7,0x1f(s0)[0m                      [39m  [39m2ce8: [35m~>[39m[39m sb      t7,0x1f(s0)[0m
[39m2cf8: [32m~>[39m[39m lw      a0,0x34(sp)[0m                      [39m  [39m2cec: [36m~>[39m[39m lw      a0,0x34(sp)[0m
[39m2cfc:    sw      v1,0x28(sp)[0m                      [39m  [39m2cf0:    sw      v1,0x28(sp)[0m
[39m2d00:    jal     func_800BC154[0m                    [39m  [39m2cf4:    jal     func_800BC154[0m
[39m2d04:    addiu   a1,a0,0x1ca0[0m                     [39m  [39m2cf8:    addiu   a1,a0,0x1ca0[0m
[39m2d08:    addiu   a1,s0,0x2a0[0m                      [39m  [39m2cfc:    addiu   a1,s0,0x2a0[0m
[39m2d0c:    sw      a1,0x24(sp)[0m                      [39m  [39m2d00:    sw      a1,0x24(sp)[0m
[39m2d10:    jal     Collider_InitCylinder[0m            [39m  [39m2d04:    jal     Collider_InitCylinder[0m
[39m2d14:    lw      a0,0x34(sp)[0m                      [39m  [39m2d08:    lw      a0,0x34(sp)[0m
[39m2d18:    lw      v1,0x28(sp)[0m                      [39m  [39m2d0c:    lw      v1,0x28(sp)[0m
[39m2d1c:    li      at,4[0m                             [39m  [39m2d10:    li      at,4[0m
[39m2d20:    addiu   a0,s0,0xbc[0m                       [39m  [39m2d14:    addiu   a0,s0,0xbc[0m
[39m2d24:    beq     v1,at,2d64[0m [31m~>[39m                    [39m  [39m2d18:    beq     v1,at,2d58[0m [32m~>[39m
[39m2d28:    li      a1,0[0m                             [39m  [39m2d1c:    li      a1,0[0m
[39m2d2c:    lui     a2,%hi(func_800B3FC0)[0m            [39m  [39m2d20:    lui     a2,%hi(func_800B3FC0)[0m
[39m2d30:    addiu   a2,a2,%lo(func_800B3FC0)[0m         [39m  [39m2d24:    addiu   a2,a2,%lo(func_800B3FC0)[0m
[39m2d34:    lui     a3,0x4190[0m                        [39m  [39m2d28:    lui     a3,0x4190[0m
[39m2d38:    jal     ActorShape_Init[0m                  [39m  [39m2d2c:    jal     ActorShape_Init[0m
[39m2d3c:    sw      v1,0x28(sp)[0m                      [39m  [39m2d30:    sw      v1,0x28(sp)[0m
[39m2d40:    lui     a3,%hi(D_80B4E8DC)[0m               [39m  [39m2d34:    lui     a3,%hi(D_80B4E8DC)[0m
[39m2d44:    addiu   a3,a3,%lo(D_80B4E8DC)[0m            [39m  [39m2d38:    addiu   a3,a3,%lo(D_80B4E8DC)[0m
[39m2d48:    lw      a0,0x34(sp)[0m                      [39m  [39m2d3c:    lw      a0,0x34(sp)[0m
[39m2d4c:    lw      a1,0x24(sp)[0m                      [39m  [39m2d40:    lw      a1,0x24(sp)[0m
[39m2d50:    jal     Collider_SetCylinder[0m             [39m  [39m2d44:    jal     Collider_SetCylinder[0m
[39m2d54:    move    a2,s0[0m                            [39m  [39m2d48:    move    a2,s0[0m
[39m2d58:    lw      v1,0x28(sp)[0m                      [39m  [39m2d4c:    lw      v1,0x28(sp)[0m
[39m2d5c:    li      t8,0xff[0m                          [39m  [39m2d50:    li      t8,0xff[0m
[39m2d60:    sb      t8,0xb6(s0)[0m                      [39m  [39m2d54:    sb      t8,0xb6(s0)[0m
[39m2d64: [31m~>[39m[39m li      at,4[0m                             [39m  [39m2d58: [32m~>[39m[39m li      at,4[0m
[39m2d68:    bne     v1,at,2d80[0m [93m~>[39m                    [39m  [39m2d5c:    bne     v1,at,2d74[0m [31m~>[39m
[39m2d6c:    li      a1,0xb7[0m                          [39m  [39m2d60:    li      a1,0xb7[0m
[39m2d70:    lui     t9,%hi(func_80B48620)[0m            [39m  [39m2d64:    lui     t9,%hi(func_80B48620)[0m
[39m2d74:    addiu   t9,t9,%lo(func_80B48620)[0m         [39m  [39m2d68:    addiu   t9,t9,%lo(func_80B48620)[0m
[39m2d78:    b       2df4[0m [95m~>[39m                          [39m  [39m2d6c:    b       2de8[0m [93m~>[39m
[39m2d7c:    sw      t9,0x138(s0)[0m                     [39m  [39m2d70:    sw      t9,0x138(s0)[0m
[39m2d80: [93m~>[39m[39m li      at,5[0m                             [39m  [39m2d74: [31m~>[39m[39m li      at,5[0m
[39m2d84:    bne     v1,at,2da0[0m [96m~>[39m                    [39m  [39m2d78:    bne     v1,at,2d94[0m [95m~>[39m
[39m2d88:    lui     t0,%hi(func_80B48FB0)[0m            [39m  [39m2d7c:    lui     t0,%hi(func_80B48FB0)[0m
[39m2d8c:    addiu   t0,t0,%lo(func_80B48FB0)[0m         [39m  [39m2d80:    addiu   t0,t0,%lo(func_80B48FB0)[0m
[39m2d90:    li      t1,0x19[0m                          [39m  [39m2d84:    li      t1,0x19[0m
[39m2d94:    sw      t0,0x138(s0)[0m                     [39m  [39m2d88:    sw      t0,0x138(s0)[0m
[39m2d98:    b       2df4[0m [95m~>[39m                          [39m  [39m2d8c:    b       2de8[0m [93m~>[39m
[39m2d9c:    sw      t1,4(s0)[0m                         [39m  [39m2d90:    sw      t1,4(s0)[0m
[39m2da0: [96m~>[39m[39m li      at,7[0m                             [39m  [39m2d94: [95m~>[39m[39m li      at,7[0m
[39m2da4:    bne     v1,at,2db8[0m [92m~>[39m                    [39m  [39m2d98:    bne     v1,at,2dac[0m [96m~>[39m
[39m2da8:    lui     t2,%hi(func_80B49F88)[0m            [39m  [39m2d9c:    lui     t2,%hi(func_80B49F88)[0m
[39m2dac:    addiu   t2,t2,%lo(func_80B49F88)[0m         [39m  [39m2da0:    addiu   t2,t2,%lo(func_80B49F88)[0m
[39m2db0:    b       2df4[0m [95m~>[39m                          [39m  [39m2da4:    b       2de8[0m [93m~>[39m
[39m2db4:    sw      t2,0x138(s0)[0m                     [39m  [39m2da8:    sw      t2,0x138(s0)[0m
[39m2db8: [92m~>[39m[39m li      at,8[0m                             [39m  [39m2dac: [96m~>[39m[39m li      at,8[0m
[39m2dbc:    bne     v1,at,2dd0[0m [90m~>[39m                    [39m  [39m2db0:    bne     v1,at,2dc4[0m [92m~>[39m
[39m2dc0:    lui     t3,%hi(func_80B4A9C8)[0m            [39m  [39m2db4:    lui     t3,%hi(func_80B4A9C8)[0m
[39m2dc4:    addiu   t3,t3,%lo(func_80B4A9C8)[0m         [39m  [39m2db8:    addiu   t3,t3,%lo(func_80B4A9C8)[0m
[39m2dc8:    b       2df4[0m [95m~>[39m                          [39m  [39m2dbc:    b       2de8[0m [93m~>[39m
[39m2dcc:    sw      t3,0x138(s0)[0m                     [39m  [39m2dc0:    sw      t3,0x138(s0)[0m
[39m2dd0: [90m~>[39m[39m li      at,9[0m                             [39m  [39m2dc4: [92m~>[39m[39m li      at,9[0m
[39m2dd4:    bne     v1,at,2dec[0m [35m~>[39m                    [39m  [39m2dc8:    bne     v1,at,2de0[0m [90m~>[39m
[39m2dd8:    lui     t5,%hi(func_80B4CE54)[0m            [39m  [39m2dcc:    lui     t5,%hi(func_80B4CE54)[0m
[39m2ddc:    lui     t4,%hi(func_80B4B0C4)[0m            [39m  [39m2dd0:    lui     t4,%hi(func_80B4B0C4)[0m
[39m2de0:    addiu   t4,t4,%lo(func_80B4B0C4)[0m         [39m  [39m2dd4:    addiu   t4,t4,%lo(func_80B4B0C4)[0m
[39m2de4:    b       2df4[0m [95m~>[39m                          [39m  [39m2dd8:    b       2de8[0m [93m~>[39m
[39m2de8:    sw      t4,0x138(s0)[0m                     [39m  [39m2ddc:    sw      t4,0x138(s0)[0m
[39m2dec: [35m~>[39m[39m addiu   t5,t5,%lo(func_80B4CE54)[0m         [39m  [39m2de0: [90m~>[39m[39m addiu   t5,t5,%lo(func_80B4CE54)[0m
[39m2df0:    sw      t5,0x138(s0)[0m                     [39m  [39m2de4:    sw      t5,0x138(s0)[0m
[39m2df4: [95m~>[39m[39m lw      a0,0x34(sp)[0m                      [39m  [39m2de8: [93m~>[39m[39m lw      a0,0x34(sp)[0m
[39m2df8:    lui     at,0x1[0m                           [39m  [39m2dec:    lui     at,0x1[0m
[39m2dfc:    ori     at,at,0x7d88[0m                     [39m  [39m2df0:    ori     at,at,0x7d88[0m
[39m2e00:    sw      v1,0x28(sp)[0m                      [39m  [39m2df4:    sw      v1,0x28(sp)[0m
[39m2e04:    jal     Object_GetIndex[0m                  [39m  [39m2df8:    jal     Object_GetIndex[0m
[39m2e08:    addu    a0,a0,at[0m                         [39m  [39m2dfc:    addu    a0,a0,at[0m
[39m2e0c:    lw      v1,0x28(sp)[0m                      [39m  [39m2e00:    lw      v1,0x28(sp)[0m
[39m2e10:    sb      v0,0x2f4(s0)[0m                     [39m  [39m2e04:    sb      v0,0x2f4(s0)[0m
[39m2e14:    lb      t6,0x2f4(s0)[0m                     [39m  [39m2e08:    lb      t6,0x2f4(s0)[0m
[39m2e18:    move    a0,s0[0m                            [39m  [39m2e0c:    move    a0,s0[0m
[39m2e1c:    bgezl   t6,2e34[0m [36m~>[39m                       [39m  [39m2e10:    bgezl   t6,2e28[0m [35m~>[39m
[39m2e20:    li      at,5[0m                             [39m  [39m2e14:    li      at,5[0m
[39m2e24:    jal     Actor_MarkForDeath[0m               [39m  [39m2e18:    jal     Actor_MarkForDeath[0m
[39m2e28:    sw      v1,0x28(sp)[0m                      [39m  [39m2e1c:    sw      v1,0x28(sp)[0m
[39m2e2c:    lw      v1,0x28(sp)[0m                      [39m  [39m2e20:    lw      v1,0x28(sp)[0m
[39m2e30: [36m~>[39m[39m li      at,5[0m                             [39m  [39m2e24: [35m~>[39m[39m li      at,5[0m
[39m2e34:    bne     v1,at,2e5c[0m [32m~>[39m                    [39m  [39m2e28:    bne     v1,at,2e50[0m [36m~>[39m
[39m2e38:    lui     t7,%hi(gSaveContext)[0m             [39m  [39m2e2c:    lui     t7,%hi(gSaveContext)[0m
[39m2e3c:    lbu     t7,%lo(gSaveContext+0xf0e)(t7)[0m   [39m  [39m2e30:    lbu     t7,%lo(gSaveContext+0xf0e)(t7)[0m
[39m2e40:    andi    t8,t7,0x1[0m                        [39m  [39m2e34:    andi    t8,t7,0x1[0m
[39m2e44:    beqzl   t8,2ef4[0m [31m~>[39m                       [39m  [39m2e38:    beqzl   t8,2ee8[0m [32m~>[39m
[39m2e48:    lw      ra,0x1c(sp)[0m                      [39m  [39m2e3c:    lw      ra,0x1c(sp)[0m
[39m2e4c:    jal     Actor_MarkForDeath[0m               [39m  [39m2e40:    jal     Actor_MarkForDeath[0m
[39m2e50:    move    a0,s0[0m                            [39m  [39m2e44:    move    a0,s0[0m
[39m2e54:    b       2ef4[0m [93m~>[39m                          [39m  [39m2e48:    b       2ee8[0m [31m~>[39m
[39m2e58:    lw      ra,0x1c(sp)[0m                      [39m  [39m2e4c:    lw      ra,0x1c(sp)[0m
[39m2e5c: [32m~>[39m[39m li      at,7[0m                             [39m  [39m2e50: [36m~>[39m[39m li      at,7[0m
[39m2e60:    bne     v1,at,2e90[0m [95m~>[39m                    [39m  [39m2e54:    bne     v1,at,2e84[0m [93m~>[39m
[39m2e64:    lui     v0,%hi(gSaveContext)[0m             [39m  [39m2e58:    lui     v0,%hi(gSaveContext)[0m
[39m2e68:    lhu     v0,%lo(gSaveContext+0xc)(v0)[0m     [39m  [39m2e5c:    lhu     v0,%lo(gSaveContext+0xc)(v0)[0m
[39m2e6c:    slti    at,v0,0x4000[0m                     [39m  [39m2e60:    slti    at,v0,0x4000[0m
[39m2e70:    beqz    at,2ef0[0m [31m~>[39m                       [39m  [39m2e64:    beqz    at,2ee4[0m [32m~>[39m
[39m2e74:    slti    at,v0,0x1800[0m                     [39m  [39m2e68:    slti    at,v0,0x1800[0m
[39m2e78:    bnezl   at,2ef4[0m [31m~>[39m                       [39m  [39m2e6c:    bnezl   at,2ee8[0m [32m~>[39m
[39m2e7c:    lw      ra,0x1c(sp)[0m                      [39m  [39m2e70:    lw      ra,0x1c(sp)[0m
[39m2e80:    jal     Actor_MarkForDeath[0m               [39m  [39m2e74:    jal     Actor_MarkForDeath[0m
[39m2e84:    move    a0,s0[0m                            [39m  [39m2e78:    move    a0,s0[0m
[39m2e88:    b       2ef4[0m [93m~>[39m                          [39m  [39m2e7c:    b       2ee8[0m [31m~>[39m
[39m2e8c:    lw      ra,0x1c(sp)[0m                      [39m  [39m2e80:    lw      ra,0x1c(sp)[0m
[39m2e90: [95m~>[39m[39m li      at,8[0m                             [39m  [39m2e84: [93m~>[39m[39m li      at,8[0m
[39m2e94:    beq     v1,at,2ef0[0m [31m~>[39m                    [39m  [39m2e88:    beq     v1,at,2ee4[0m [32m~>[39m
[39m2e98:    li      at,9[0m                             [39m  [39m2e8c:    li      at,9[0m
[39m2e9c:    bne     v1,at,2ec4[0m [96m~>[39m                    [39m  [39m2e90:    bne     v1,at,2eb8[0m [95m~>[39m
[39m2ea0:    lui     t9,%hi(gSaveContext)[0m             [39m  [39m2e94:    lui     t9,%hi(gSaveContext)[0m
[39m2ea4:    lw      t9,%lo(gSaveContext)(t9)[0m         [39m  [39m2e98:    lw      t9,%lo(gSaveContext)(t9)[0m
[39m2ea8:    li      at,0x6460[0m                        [39m  [39m2e9c:    li      at,0x6460[0m
[39m2eac:    beql    t9,at,2ef4[0m [31m~>[39m                    [39m  [39m2ea0:    beql    t9,at,2ee8[0m [32m~>[39m
[39m2eb0:    lw      ra,0x1c(sp)[0m                      [39m  [39m2ea4:    lw      ra,0x1c(sp)[0m
[39m2eb4:    jal     Actor_MarkForDeath[0m               [39m  [39m2ea8:    jal     Actor_MarkForDeath[0m
[39m2eb8:    move    a0,s0[0m                            [39m  [39m2eac:    move    a0,s0[0m
[39m2ebc:    b       2ef4[0m [93m~>[39m                          [39m  [39m2eb0:    b       2ee8[0m [31m~>[39m
[39m2ec0:    lw      ra,0x1c(sp)[0m                      [39m  [39m2eb4:    lw      ra,0x1c(sp)[0m
[39m2ec4: [96m~>[39m[39m li      at,0xc[0m                           [39m  [39m2eb8: [95m~>[39m[39m li      at,0xc[0m
[39m2ec8:    bne     v1,at,2ef0[0m [31m~>[39m                    [39m  [39m2ebc:    bne     v1,at,2ee4[0m [32m~>[39m
[39m2ecc:    lui     t0,%hi(gSaveContext)[0m             [39m  [39m2ec0:    lui     t0,%hi(gSaveContext)[0m
[39m2ed0:    lbu     t0,%lo(gSaveContext+0xf0e)(t0)[0m   [39m  [39m2ec4:    lbu     t0,%lo(gSaveContext+0xf0e)(t0)[0m
[39m2ed4:    andi    t1,t0,0x1[0m                        [39m  [39m2ec8:    andi    t1,t0,0x1[0m
[39m2ed8:    bnez    t1,2ee8[0m [92m~>[39m                       [39m  [39m2ecc:    bnez    t1,2edc[0m [96m~>[39m
[39m2edc:    nop[0m                                      [39m  [39m2ed0:    nop[0m
[39m2ee0:    jal     Actor_MarkForDeath[0m               [39m  [39m2ed4:    jal     Actor_MarkForDeath[0m
[39m2ee4:    move    a0,s0[0m                            [39m  [39m2ed8:    move    a0,s0[0m
[39m2ee8: [92m~>[39m[39m lui     at,%hi(D_80B503F4)[0m               [39m  [39m2edc: [96m~>[39m[39m lui     at,%hi(D_80B503F4)[0m
[39m2eec:    sw      s0,%lo(D_80B503F4)(at)[0m           [39m  [39m2ee0:    sw      s0,%lo(D_80B503F4)(at)[0m
[39m2ef0: [31m~>[39m[39m lw      ra,0x1c(sp)[0m                      [39m  [39m2ee4: [32m~>[39m[39m lw      ra,0x1c(sp)[0m
[39m2ef4: [93m~>[39m[39m lw      s0,0x18(sp)[0m                      [39m  [39m2ee8: [31m~>[39m[39m lw      s0,0x18(sp)[0m
[39m2ef8:    addiu   sp,sp,0x30[0m                       [39m  [39m2eec:    addiu   sp,sp,0x30[0m
[39m2efc:    jr      ra[0m                               [39m  [39m2ef0:    jr      ra[0m
[39m2f00:    nop[0m                                      [39m  [39m2ef4:    nop[0m
[39m2f04:    addiu   sp,sp,-0x18[0m                      [39m  [39m2ef8:    addiu   sp,sp,-0x18[0m
[39m2f08:    sw      ra,0x14(sp)[0m                      [39m  [39m2efc:    sw      ra,0x14(sp)[0m
[39m2f0c:    sw      a1,0x1c(sp)[0m                      [39m  [39m2f00:    sw      a1,0x1c(sp)[0m
[39m2f10:    move    a2,a0[0m                            [39m  [39m2f04:    move    a2,a0[0m
[39m2f14:    lui     a1,%hi(D_80B4EC68)[0m               [39m  [39m2f08:    lui     a1,%hi(D_80B4EC68)[0m
[39m2f18:    addiu   a1,a1,%lo(D_80B4EC68)[0m            [39m  [39m2f0c:    addiu   a1,a1,%lo(D_80B4EC68)[0m
[39m2f1c:    move    a0,a2[0m                            [39m  [39m2f10:    move    a0,a2[0m
[39m2f20:    jal     Actor_ProcessInitChain[0m           [39m  [39m2f14:    jal     Actor_ProcessInitChain[0m
[39m2f24:    sw      a2,0x18(sp)[0m                      [39m  [39m2f18:    sw      a2,0x18(sp)[0m
[39m2f28:    lw      a2,0x18(sp)[0m                      [39m  [39m2f1c:    lw      a2,0x18(sp)[0m
[39m2f2c:    lw      a0,0x1c(sp)[0m                      [39m  [39m2f20:    lw      a0,0x1c(sp)[0m
[39m2f30:    lui     t6,%hi(func_80B49B1C)[0m            [39m  [39m2f24:    lui     t6,%hi(func_80B49B1C)[0m
[39m2f34:    lui     t7,%hi(func_80B4E3F0)[0m            [39m  [39m2f28:    lui     t7,%hi(func_80B4E3F0)[0m
[39m2f38:    addiu   t6,t6,%lo(func_80B49B1C)[0m         [39m  [39m2f2c:    addiu   t6,t6,%lo(func_80B49B1C)[0m
[39m2f3c:    addiu   t7,t7,%lo(func_80B4E3F0)[0m         [39m  [39m2f30:    addiu   t7,t7,%lo(func_80B4E3F0)[0m
[39m2f40:    li      a3,4[0m                             [39m  [39m2f34:    li      a3,4[0m
[39m2f44:    sw      t6,0x138(a2)[0m                     [39m  [39m2f38:    sw      t6,0x138(a2)[0m
[39m2f48:    sw      t7,0x13c(a2)[0m                     [39m  [39m2f3c:    sw      t7,0x13c(a2)[0m
[39m2f4c:    jal     func_800BC154[0m                    [39m  [39m2f40:    jal     func_800BC154[0m
[39m2f50:    addiu   a1,a0,0x1ca0[0m                     [39m  [39m2f44:    addiu   a1,a0,0x1ca0[0m
[39m2f54:    lui     v0,%hi(D_80B4E940)[0m               [39m  [39m2f48:    lui     v0,%hi(D_80B4E940)[0m
[39m2f58:    lw      v0,%lo(D_80B4E940)(v0)[0m           [39m  [39m2f4c:    lw      v0,%lo(D_80B4E940)(v0)[0m
[39m2f5c:    li      at,1[0m                             [39m  [39m2f50:    li      at,1[0m
[39m2f60:    lw      a2,0x18(sp)[0m                      [39m  [39m2f54:    lw      a2,0x18(sp)[0m
[39m2f64:    beq     v0,at,2f7c[0m [90m~>[39m                    [39m  [39m2f58:    beq     v0,at,2f70[0m [92m~>[39m
[39m2f68:    lui     t8,%hi(gSaveContext)[0m             [39m  [39m2f5c:    lui     t8,%hi(gSaveContext)[0m
[39m2f6c:    lhu     t8,%lo(gSaveContext+0xc)(t8)[0m     [39m  [39m2f60:    lhu     t8,%lo(gSaveContext+0xc)(t8)[0m
[39m2f70:    slti    at,t8,0x1ad8[0m                     [39m  [39m2f64:    slti    at,t8,0x1ad8[0m
[39m2f74:    beqzl   at,2fd4[0m [35m~>[39m                       [39m  [39m2f68:    beqzl   at,2fc8[0m [90m~>[39m
[39m2f78:    li      at,2[0m                             [39m  [39m2f6c:    li      at,2[0m
[39m2f7c: [90m~>[39m[39m lui     v0,%hi(D_80B4E934)[0m               [39m  [39m2f70: [92m~>[39m[39m lui     v0,%hi(D_80B4E934)[0m
[39m2f80:    addiu   v0,v0,%lo(D_80B4E934)[0m            [39m  [39m2f74:    addiu   v0,v0,%lo(D_80B4E934)[0m
[39m2f84:    lwc1    $f6,0(v0)[0m                        [39m  [39m2f78:    lwc1    $f6,0(v0)[0m
[39m2f88:    lwc1    $f4,0x24(a2)[0m                     [39m  [39m2f7c:    lwc1    $f4,0x24(a2)[0m
[39m2f8c:    lui     at,%hi(D_80B4EE88)[0m               [39m  [39m2f80:    lui     at,%hi(D_80B4EE88)[0m
[39m2f90:    move    a0,a2[0m                            [39m  [39m2f84:    move    a0,a2[0m
[39m2f94:    add.s   $f8,$f4,$f6[0m                      [39m  [39m2f88:    add.s   $f8,$f4,$f6[0m
[39m2f98:    lwc1    $f4,0x28(a2)[0m                     [39m  [39m2f8c:    lwc1    $f4,0x28(a2)[0m
[39m2f9c:    swc1    $f8,0x24(a2)[0m                     [39m  [39m2f90:    swc1    $f8,0x24(a2)[0m
[39m2fa0:    lwc1    $f16,%lo(D_80B4EE88)(at)[0m         [39m  [39m2f94:    lwc1    $f16,%lo(D_80B4EE88)(at)[0m
[39m2fa4:    lwc1    $f10,4(v0)[0m                       [39m  [39m2f98:    lwc1    $f10,4(v0)[0m
[39m2fa8:    lwc1    $f8,0x2c(a2)[0m                     [39m  [39m2f9c:    lwc1    $f8,0x2c(a2)[0m
[39m2fac:    add.s   $f18,$f10,$f16[0m                   [39m  [39m2fa0:    add.s   $f18,$f10,$f16[0m
[39m2fb0:    add.s   $f6,$f4,$f18[0m                     [39m  [39m2fa4:    add.s   $f6,$f4,$f18[0m
[39m2fb4:    swc1    $f6,0x28(a2)[0m                     [39m  [39m2fa8:    swc1    $f6,0x28(a2)[0m
[39m2fb8:    lwc1    $f10,8(v0)[0m                       [39m  [39m2fac:    lwc1    $f10,8(v0)[0m
[39m2fbc:    add.s   $f16,$f8,$f10[0m                    [39m  [39m2fb0:    add.s   $f16,$f8,$f10[0m
[39m2fc0:    jal     func_80B491EC[0m                    [39m  [39m2fb4:    jal     func_80B491EC[0m
[39m2fc4:    swc1    $f16,0x2c(a2)[0m                    [39m  [39m2fb8:    swc1    $f16,0x2c(a2)[0m
[39m2fc8:    b       3008[0m [36m~>[39m                          [39m  [39m2fbc:    b       2ffc[0m [35m~>[39m
[39m2fcc:    lw      ra,0x14(sp)[0m                      [39m  [39m2fc0:    lw      ra,0x14(sp)[0m
[39m2fd0: [35m~>[39m[39m li      at,2[0m                             [39m  [39m2fc4: [90m~>[39m[39m li      at,2[0m
[39m2fd4:    bne     v0,at,2ffc[0m [32m~>[39m                    [39m  [39m2fc8:    bne     v0,at,2ff0[0m [36m~>[39m
[39m2fd8:    lui     at,%hi(D_80B4EE8C)[0m               [39m  [39m2fcc:    lui     at,%hi(D_80B4EE8C)[0m
[39m2fdc:    lwc1    $f18,%lo(D_80B4EE8C)(at)[0m         [39m  [39m2fd0:    lwc1    $f18,%lo(D_80B4EE8C)(at)[0m
[39m2fe0:    lwc1    $f4,0x28(a2)[0m                     [39m  [39m2fd4:    lwc1    $f4,0x28(a2)[0m
[39m2fe4:    move    a0,a2[0m                            [39m  [39m2fd8:    move    a0,a2[0m
[39m2fe8:    add.s   $f6,$f4,$f18[0m                     [39m  [39m2fdc:    add.s   $f6,$f4,$f18[0m
[39m2fec:    jal     func_80B49628[0m                    [39m  [39m2fe0:    jal     func_80B49628[0m
[39m2ff0:    swc1    $f6,0x28(a2)[0m                     [39m  [39m2fe4:    swc1    $f6,0x28(a2)[0m
[39m2ff4:    b       3008[0m [36m~>[39m                          [39m  [39m2fe8:    b       2ffc[0m [35m~>[39m
[39m2ff8:    lw      ra,0x14(sp)[0m                      [39m  [39m2fec:    lw      ra,0x14(sp)[0m
[39m2ffc: [32m~>[39m[39m jal     Actor_MarkForDeath[0m               [39m  [39m2ff0: [36m~>[39m[39m jal     Actor_MarkForDeath[0m
[39m3000:    move    a0,a2[0m                            [39m  [39m2ff4:    move    a0,a2[0m
[39m3004:    lw      ra,0x14(sp)[0m                      [39m  [39m2ff8:    lw      ra,0x14(sp)[0m
[39m3008: [36m~>[39m[39m addiu   sp,sp,0x18[0m                       [39m  [39m2ffc: [35m~>[39m[39m addiu   sp,sp,0x18[0m
[39m300c:    jr      ra[0m                               [39m  [39m3000:    jr      ra[0m
[39m3010:    nop[0m                                      [39m  [39m3004:    nop[0m
[39m3014:    addiu   sp,sp,-0x28[0m                      [39m  [39m3008:    addiu   sp,sp,-0x28[0m
[39m3018:    sw      s0,0x18(sp)[0m                      [39m  [39m300c:    sw      s0,0x18(sp)[0m
[39m301c:    move    s0,a0[0m                            [39m  [39m3010:    move    s0,a0[0m
[39m3020:    sw      ra,0x1c(sp)[0m                      [39m  [39m3014:    sw      ra,0x1c(sp)[0m
[39m3024:    sw      a1,0x2c(sp)[0m                      [39m  [39m3018:    sw      a1,0x2c(sp)[0m
[39m3028:    lui     a1,%hi(D_80B4EC80)[0m               [39m  [39m301c:    lui     a1,%hi(D_80B4EC80)[0m
[39m302c:    addiu   a1,a1,%lo(D_80B4EC80)[0m            [39m  [39m3020:    addiu   a1,a1,%lo(D_80B4EC80)[0m
[39m3030:    jal     Actor_ProcessInitChain[0m           [39m  [39m3024:    jal     Actor_ProcessInitChain[0m
[39m3034:    move    a0,s0[0m                            [39m  [39m3028:    move    a0,s0[0m
[39m3038:    lui     t6,%hi(func_80B4B8BC)[0m            [39m  [39m302c:    lui     t6,%hi(func_80B4B8BC)[0m
[39m303c:    addiu   t6,t6,%lo(func_80B4B8BC)[0m         [39m  [39m3030:    addiu   t6,t6,%lo(func_80B4B8BC)[0m
[39m3040:    sw      t6,0x138(s0)[0m                     [39m  [39m3034:    sw      t6,0x138(s0)[0m
[39m3044:    addiu   a1,s0,0x2a0[0m                      [39m  [39m3038:    addiu   a1,s0,0x2a0[0m
[39m3048:    sw      a1,0x20(sp)[0m                      [39m  [39m303c:    sw      a1,0x20(sp)[0m
[39m304c:    jal     Collider_InitCylinder[0m            [39m  [39m3040:    jal     Collider_InitCylinder[0m
[39m3050:    lw      a0,0x2c(sp)[0m                      [39m  [39m3044:    lw      a0,0x2c(sp)[0m
[39m3054:    lui     a3,%hi(D_80B4E908)[0m               [39m  [39m3048:    lui     a3,%hi(D_80B4E908)[0m
[39m3058:    lw      a1,0x20(sp)[0m                      [39m  [39m304c:    lw      a1,0x20(sp)[0m
[39m305c:    addiu   a3,a3,%lo(D_80B4E908)[0m            [39m  [39m3050:    addiu   a3,a3,%lo(D_80B4E908)[0m
[39m3060:    lw      a0,0x2c(sp)[0m                      [39m  [39m3054:    lw      a0,0x2c(sp)[0m
[39m3064:    jal     Collider_SetCylinder[0m             [39m  [39m3058:    jal     Collider_SetCylinder[0m
[39m3068:    move    a2,s0[0m                            [39m  [39m305c:    move    a2,s0[0m
[39m306c:    li      t7,0x50[0m                          [39m  [39m3060:    li      t7,0x50[0m
[39m3070:    lui     a2,%hi(func_800B3FC0)[0m            [39m  [39m3064:    lui     a2,%hi(func_800B3FC0)[0m
[39m3074:    sb      t7,0xb6(s0)[0m                      [39m  [39m3068:    sb      t7,0xb6(s0)[0m
[39m3078:    addiu   a2,a2,%lo(func_800B3FC0)[0m         [39m  [39m306c:    addiu   a2,a2,%lo(func_800B3FC0)[0m
                                                  [32m> [32m3070:    addiu   a0,s0,0xbc[0m
                                                  [32m> [32m3074:    li      a1,0[0m
                                                  [32m> [32m3078:    jal     0[0m