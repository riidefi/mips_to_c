s32 test(u32 arg0, s32 arg1, s32 arg2)
{
    s32 temp_v0;
    s32 temp_v1;
    s32 phi_v0;
    void *phi_a0;
    s32 phi_v1;

    phi_v0 = ((0x80150000 + ((arg0 >> 0x18) * 4))->unk258 + (arg0 & 0xFFFFFF)) + 0x80000000;
    phi_a0 = (arg2 * 4) + &D_8015F668;
    phi_v1 = 0;
loop_3:
    *phi_a0 = phi_v0;
    temp_v1 = phi_v1 + 1;
    temp_v0 = phi_v0 + 0x10;
    phi_v0 = temp_v0;
    phi_a0 = phi_a0 + 4;
    phi_v1 = temp_v1;
    if (arg1 != temp_v1)
    {
        goto loop_3;
    }
    return temp_v0;
}
