s32 test(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp24;
    s32 sp20;
    s32 sp1C;
    s32 temp_t9;

    sp24 = arg0 + arg1;
    sp20 = arg1 + arg2;
    sp1C = 0;
    if ((((sp24 != 0) || (sp20 != 0)) || (sp20 = func_00400090(sp20), (sp20 != 0))) || (arg3 != 0)) {
        sp1C = 1;
    } else {

    }
    if (sp24 != 0) {
        if (sp20 != 0) {
            temp_t9 = sp24 + sp20;
            sp24 = temp_t9;
            sp20 = func_00400090(temp_t9);
            if (sp20 != 0) {
                if (arg3 != 0) {
                    if (sp1C < 5) {
loop_10:
                        sp1C = sp1C + 1;
                        sp1C = sp1C * 2;
                        if (sp1C < 5) {
                            goto loop_10;
                        }
                    }
                    sp1C = sp1C + 5;
                }
            }
        }
    }
    return sp1C;
}
