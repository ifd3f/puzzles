#pragma once
#include "util.hpp"

using initial_stacks = list<
    list<
        charbox<'Q'>,
        charbox<'F'>,
        charbox<'L'>,
        charbox<'S'>,
        charbox<'R'>
    >,
    list<
        charbox<'T'>,
        charbox<'P'>,
        charbox<'G'>,
        charbox<'Q'>,
        charbox<'Z'>,
        charbox<'N'>
    >,
    list<
        charbox<'B'>,
        charbox<'Q'>,
        charbox<'M'>,
        charbox<'S'>
    >,
    list<
        charbox<'Q'>,
        charbox<'B'>,
        charbox<'C'>,
        charbox<'H'>,
        charbox<'J'>,
        charbox<'Z'>,
        charbox<'G'>,
        charbox<'T'>
    >,
    list<
        charbox<'S'>,
        charbox<'F'>,
        charbox<'N'>,
        charbox<'B'>,
        charbox<'M'>,
        charbox<'H'>,
        charbox<'P'>
    >,
    list<
        charbox<'G'>,
        charbox<'V'>,
        charbox<'L'>,
        charbox<'S'>,
        charbox<'N'>,
        charbox<'Q'>,
        charbox<'C'>,
        charbox<'P'>
    >,
    list<
        charbox<'F'>,
        charbox<'C'>,
        charbox<'W'>
    >,
    list<
        charbox<'M'>,
        charbox<'P'>,
        charbox<'V'>,
        charbox<'W'>,
        charbox<'Z'>,
        charbox<'G'>,
        charbox<'H'>,
        charbox<'Q'>
    >,
    list<
        charbox<'R'>,
        charbox<'N'>,
        charbox<'C'>,
        charbox<'L'>,
        charbox<'D'>,
        charbox<'Z'>,
        charbox<'G'>
    >
>;

using moves_list = list<
    move<1, 2, 6>,
    move<3, 7, 9>,
    move<7, 9, 4>,
    move<2, 5, 3>,
    move<3, 2, 8>,
    move<14, 4, 5>,
    move<1, 2, 1>,
    move<1, 2, 3>,
    move<3, 6, 8>,
    move<3, 6, 9>,
    move<1, 4, 6>,
    move<5, 9, 8>,
    move<9, 8, 9>,
    move<3, 3, 8>,
    move<8, 9, 4>,
    move<2, 1, 7>,
    move<4, 1, 5>,
    move<2, 7, 1>,
    move<1, 9, 6>,
    move<7, 4, 7>,
    move<1, 8, 4>,
    move<1, 9, 8>,
    move<2, 6, 7>,
    move<7, 7, 3>,
    move<10, 3, 1>,
    move<1, 3, 2>,
    move<1, 2, 9>,
    move<1, 9, 8>,
    move<15, 5, 8>,
    move<1, 6, 9>,
    move<2, 7, 3>,
    move<11, 1, 8>,
    move<1, 9, 8>,
    move<1, 1, 5>,
    move<3, 5, 2>,
    move<2, 6, 9>,
    move<1, 2, 4>,
    move<2, 4, 5>,
    move<1, 3, 6>,
    move<5, 8, 3>,
    move<12, 8, 4>,
    move<2, 2, 5>,
    move<12, 8, 1>,
    move<1, 6, 9>,
    move<10, 5, 7>,
    move<3, 3, 9>,
    move<6, 8, 9>,
    move<2, 3, 5>,
    move<8, 4, 7>,
    move<1, 3, 2>,
    move<6, 8, 6>,
    move<8, 9, 3>,
    move<2, 5, 4>,
    move<1, 2, 3>,
    move<2, 9, 2>,
    move<1, 9, 2>,
    move<1, 2, 1>,
    move<2, 2, 4>,
    move<5, 4, 2>,
    move<3, 2, 3>,
    move<2, 4, 2>,
    move<18, 7, 3>,
    move<3, 6, 9>,
    move<1, 6, 3>,
    move<1, 4, 1>,
    move<1, 6, 3>,
    move<6, 3, 9>,
    move<2, 2, 6>,
    move<26, 3, 7>,
    move<2, 2, 3>,
    move<2, 6, 8>,
    move<3, 1, 5>,
    move<8, 9, 1>,
    move<1, 8, 5>,
    move<1, 3, 1>,
    move<2, 9, 3>,
    move<1, 1, 2>,
    move<12, 1, 7>,
    move<1, 8, 5>,
    move<2, 3, 5>,
    move<1, 3, 6>,
    move<2, 6, 2>,
    move<7, 5, 7>,
    move<1, 4, 2>,
    move<15, 7, 4>,
    move<1, 4, 9>,
    move<1, 7, 6>,
    move<14, 4, 2>,
    move<1, 1, 2>,
    move<5, 1, 5>,
    move<4, 5, 4>,
    move<1, 6, 3>,
    move<4, 4, 7>,
    move<1, 9, 2>,
    move<1, 3, 5>,
    move<2, 5, 1>,
    move<1, 1, 6>,
    move<2, 1, 5>,
    move<9, 2, 9>,
    move<1, 6, 1>,
    move<1, 1, 9>,
    move<1, 5, 4>,
    move<1, 5, 6>,
    move<4, 7, 2>,
    move<1, 4, 1>,
    move<18, 7, 1>,
    move<17, 1, 7>,
    move<4, 9, 5>,
    move<1, 5, 8>,
    move<1, 1, 4>,
    move<2, 9, 6>,
    move<3, 9, 7>,
    move<1, 1, 5>,
    move<1, 7, 5>,
    move<16, 7, 2>,
    move<1, 4, 2>,
    move<1, 8, 7>,
    move<1, 9, 8>,
    move<1, 8, 4>,
    move<3, 5, 3>,
    move<15, 7, 6>,
    move<7, 6, 4>,
    move<9, 6, 2>,
    move<2, 5, 7>,
    move<2, 6, 8>,
    move<4, 4, 7>,
    move<2, 8, 1>,
    move<11, 2, 7>,
    move<1, 4, 2>,
    move<2, 3, 6>,
    move<3, 4, 5>,
    move<12, 7, 1>,
    move<1, 7, 3>,
    move<31, 2, 4>,
    move<3, 7, 2>,
    move<1, 6, 3>,
    move<1, 5, 1>,
    move<1, 5, 2>,
    move<2, 3, 4>,
    move<1, 6, 1>,
    move<1, 3, 6>,
    move<1, 5, 6>,
    move<1, 2, 4>,
    move<11, 1, 4>,
    move<5, 1, 5>,
    move<1, 7, 3>,
    move<3, 5, 8>,
    move<1, 8, 7>,
    move<1, 5, 3>,
    move<2, 8, 5>,
    move<2, 6, 2>,
    move<2, 5, 1>,
    move<1, 7, 9>,
    move<1, 3, 9>,
    move<2, 9, 5>,
    move<1, 1, 6>,
    move<1, 6, 5>,
    move<1, 3, 5>,
    move<13, 4, 8>,
    move<5, 2, 3>,
    move<3, 3, 4>,
    move<1, 8, 6>,
    move<4, 5, 2>,
    move<1, 1, 5>,
    move<1, 3, 7>,
    move<2, 5, 4>,
    move<11, 4, 5>,
    move<1, 3, 7>,
    move<15, 4, 2>,
    move<1, 6, 4>,
    move<19, 2, 8>,
    move<8, 8, 3>,
    move<2, 3, 8>,
    move<7, 5, 4>,
    move<6, 3, 4>,
    move<8, 4, 5>,
    move<7, 4, 6>,
    move<2, 7, 5>,
    move<9, 5, 6>,
    move<13, 8, 3>,
    move<3, 4, 3>,
    move<6, 3, 4>,
    move<6, 8, 2>,
    move<4, 5, 9>,
    move<5, 8, 7>,
    move<4, 6, 2>,
    move<5, 3, 5>,
    move<1, 6, 9>,
    move<8, 2, 6>,
    move<1, 8, 7>,
    move<1, 2, 5>,
    move<1, 4, 1>,
    move<3, 3, 1>,
    move<1, 7, 3>,
    move<4, 9, 8>,
    move<6, 6, 2>,
    move<2, 8, 4>,
    move<1, 7, 6>,
    move<3, 5, 1>,
    move<4, 5, 3>,
    move<6, 2, 9>,
    move<4, 7, 4>,
    move<2, 8, 5>,
    move<2, 9, 5>,
    move<4, 5, 6>,
    move<1, 2, 5>,
    move<8, 6, 7>,
    move<18, 4, 2>,
    move<2, 3, 6>,
    move<6, 1, 8>,
    move<8, 7, 9>,
    move<9, 6, 4>,
    move<1, 5, 4>,
    move<5, 8, 4>,
    move<1, 4, 5>,
    move<1, 8, 1>,
    move<8, 9, 8>,
    move<3, 3, 9>,
    move<5, 2, 7>,
    move<1, 5, 2>,
    move<2, 4, 8>,
    move<11, 2, 8>,
    move<1, 7, 2>,
    move<2, 6, 5>,
    move<1, 6, 2>,
    move<4, 2, 3>,
    move<2, 1, 3>,
    move<5, 9, 7>,
    move<1, 5, 8>,
    move<6, 7, 8>,
    move<7, 3, 7>,
    move<1, 5, 9>,
    move<3, 9, 7>,
    move<1, 4, 1>,
    move<1, 9, 8>,
    move<8, 7, 3>,
    move<1, 2, 4>,
    move<1, 1, 7>,
    move<9, 3, 7>,
    move<7, 4, 7>,
    move<8, 7, 3>,
    move<1, 7, 9>,
    move<13, 7, 4>,
    move<1, 4, 6>,
    move<11, 8, 2>,
    move<5, 3, 7>,
    move<1, 9, 6>,
    move<7, 2, 9>,
    move<2, 2, 4>,
    move<4, 9, 2>,
    move<17, 8, 3>,
    move<3, 3, 4>,
    move<1, 7, 6>,
    move<5, 2, 3>,
    move<8, 4, 1>,
    move<2, 6, 4>,
    move<1, 2, 7>,
    move<1, 1, 4>,
    move<1, 8, 2>,
    move<2, 7, 4>,
    move<7, 1, 9>,
    move<16, 4, 2>,
    move<1, 6, 1>,
    move<2, 2, 9>,
    move<6, 2, 7>,
    move<1, 1, 6>,
    move<3, 2, 6>,
    move<10, 3, 6>,
    move<6, 9, 8>,
    move<3, 4, 3>,
    move<6, 9, 2>,
    move<4, 3, 7>,
    move<10, 2, 5>,
    move<2, 2, 6>,
    move<3, 6, 3>,
    move<1, 8, 2>,
    move<1, 2, 6>,
    move<5, 6, 1>,
    move<3, 6, 7>,
    move<5, 8, 4>,
    move<3, 7, 1>,
    move<2, 6, 1>,
    move<2, 4, 1>,
    move<2, 5, 8>,
    move<1, 8, 7>,
    move<1, 8, 9>,
    move<8, 3, 4>,
    move<11, 1, 7>,
    move<1, 9, 8>,
    move<1, 8, 3>,
    move<3, 6, 3>,
    move<1, 6, 8>,
    move<3, 5, 2>,
    move<1, 8, 6>,
    move<2, 5, 8>,
    move<3, 5, 6>,
    move<3, 2, 4>,
    move<2, 8, 4>,
    move<22, 7, 3>,
    move<12, 3, 2>,
    move<9, 3, 9>,
    move<1, 1, 2>,
    move<2, 6, 8>,
    move<2, 8, 4>,
    move<2, 6, 5>,
    move<11, 3, 1>,
    move<18, 4, 3>,
    move<3, 7, 3>,
    move<1, 5, 7>,
    move<3, 2, 4>,
    move<2, 4, 9>,
    move<6, 1, 4>,
    move<1, 5, 1>,
    move<10, 9, 3>,
    move<27, 3, 9>,
    move<6, 2, 8>,
    move<5, 4, 2>,
    move<3, 3, 8>,
    move<1, 7, 8>,
    move<10, 8, 2>,
    move<5, 1, 5>,
    move<1, 3, 5>,
    move<1, 1, 8>,
    move<14, 9, 4>,
    move<6, 5, 6>,
    move<11, 9, 4>,
    move<6, 6, 3>,
    move<1, 8, 6>,
    move<2, 9, 5>,
    move<1, 2, 5>,
    move<8, 2, 1>,
    move<12, 4, 7>,
    move<1, 6, 8>,
    move<14, 4, 1>,
    move<1, 9, 8>,
    move<1, 5, 1>,
    move<2, 5, 2>,
    move<11, 1, 6>,
    move<11, 6, 1>,
    move<1, 8, 7>,
    move<1, 8, 2>,
    move<12, 1, 7>,
    move<1, 4, 7>,
    move<5, 1, 5>,
    move<5, 2, 6>,
    move<1, 5, 6>,
    move<1, 2, 9>,
    move<6, 1, 3>,
    move<19, 7, 2>,
    move<1, 9, 6>,
    move<9, 3, 2>,
    move<9, 2, 7>,
    move<3, 5, 8>,
    move<1, 5, 1>,
    move<3, 3, 9>,
    move<7, 2, 9>,
    move<15, 7, 2>,
    move<10, 9, 4>,
    move<4, 4, 9>,
    move<1, 6, 4>,
    move<1, 1, 6>,
    move<26, 2, 5>,
    move<1, 7, 3>,
    move<6, 4, 8>,
    move<3, 2, 9>,
    move<6, 8, 3>,
    move<4, 5, 7>,
    move<1, 4, 5>,
    move<2, 2, 1>,
    move<6, 9, 1>,
    move<3, 3, 8>,
    move<3, 2, 8>,
    move<3, 7, 9>,
    move<6, 1, 7>,
    move<2, 3, 2>,
    move<2, 2, 5>,
    move<1, 8, 6>,
    move<4, 7, 3>,
    move<10, 5, 3>,
    move<4, 9, 1>,
    move<6, 3, 1>,
    move<1, 7, 4>,
    move<4, 3, 2>,
    move<1, 3, 1>,
    move<13, 1, 5>,
    move<1, 3, 7>,
    move<1, 3, 8>,
    move<4, 6, 3>,
    move<1, 6, 3>,
    move<7, 8, 2>,
    move<1, 6, 9>,
    move<2, 7, 2>,
    move<1, 9, 5>,
    move<2, 8, 6>,
    move<1, 7, 5>,
    move<1, 3, 1>,
    move<30, 5, 2>,
    move<1, 3, 4>,
    move<2, 6, 1>,
    move<5, 3, 4>,
    move<2, 6, 5>,
    move<5, 4, 3>,
    move<1, 3, 1>,
    move<4, 1, 6>,
    move<1, 2, 5>,
    move<2, 4, 9>,
    move<4, 3, 5>,
    move<1, 3, 5>,
    move<1, 5, 3>,
    move<6, 5, 1>,
    move<2, 1, 9>,
    move<4, 6, 2>,
    move<1, 3, 5>,
    move<1, 5, 2>,
    move<1, 5, 2>,
    move<8, 2, 5>,
    move<4, 9, 6>,
    move<3, 1, 4>,
    move<3, 6, 2>,
    move<2, 4, 2>,
    move<1, 6, 1>,
    move<1, 4, 6>,
    move<2, 5, 1>,
    move<1, 6, 8>,
    move<3, 5, 2>,
    move<2, 5, 6>,
    move<1, 6, 7>,
    move<1, 5, 9>,
    move<1, 7, 5>,
    move<3, 1, 9>,
    move<3, 9, 5>,
    move<31, 2, 6>,
    move<1, 1, 3>,
    move<1, 8, 9>,
    move<30, 6, 9>,
    move<2, 9, 8>,
    move<13, 2, 3>,
    move<4, 5, 2>,
    move<1, 8, 4>,
    move<1, 4, 1>,
    move<1, 1, 6>,
    move<5, 2, 8>,
    move<1, 2, 8>,
    move<26, 9, 3>,
    move<18, 3, 8>,
    move<1, 2, 1>,
    move<12, 3, 8>,
    move<1, 2, 3>,
    move<3, 6, 4>,
    move<1, 1, 9>,
    move<11, 8, 5>,
    move<1, 4, 7>,
    move<9, 3, 9>,
    move<1, 7, 8>,
    move<11, 8, 3>,
    move<11, 3, 2>,
    move<11, 2, 9>,
    move<19, 9, 8>,
    move<3, 5, 7>,
    move<2, 4, 2>,
    move<2, 2, 8>,
    move<29, 8, 2>,
    move<5, 5, 4>,
    move<1, 9, 6>,
    move<2, 5, 9>,
    move<1, 6, 9>,
    move<7, 8, 7>,
    move<1, 9, 7>,
    move<6, 9, 1>,
    move<1, 9, 4>,
    move<1, 5, 4>,
    move<15, 2, 5>,
    move<3, 1, 7>,
    move<5, 5, 2>,
    move<1, 8, 3>,
    move<1, 5, 8>,
    move<2, 3, 6>,
    move<1, 3, 8>,
    move<9, 2, 1>,
    move<1, 8, 7>,
    move<1, 8, 3>,
    move<10, 7, 8>,
    move<4, 7, 3>,
    move<1, 7, 2>,
    move<1, 8, 6>,
    move<3, 6, 5>,
    move<6, 5, 8>,
    move<3, 1, 3>,
    move<8, 3, 7>,
    move<3, 1, 3>,
    move<4, 8, 3>,
    move<1, 4, 5>,
    move<4, 1, 4>,
    move<1, 4, 5>,
    move<1, 7, 4>,
    move<4, 4, 1>,
    move<2, 8, 7>,
    move<6, 5, 2>,
    move<2, 8, 1>,
    move<6, 4, 7>,
    move<1, 5, 4>,
    move<5, 8, 6>,
    move<1, 6, 9>
>;
