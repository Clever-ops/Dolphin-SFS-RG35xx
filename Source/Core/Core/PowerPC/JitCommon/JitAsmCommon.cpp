// Copyright 2008 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#include "Core/PowerPC/JitCommon/JitAsmCommon.h"

Common::Jit_data_array<u8, 16> pbswapShuffle1x4 = {3, 2, 1, 0, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
Common::Jit_data_array<u8, 16> pbswapShuffle2x4 = {3, 2, 1, 0, 7, 6, 5, 4, 8, 9, 10, 11, 12, 13, 14, 15};

Common::Jit_data_array<float, 128> m_quantizeTableS = {
    (1ULL << 0),        (1ULL << 0),        (1ULL << 1),        (1ULL << 1),
    (1ULL << 2),        (1ULL << 2),        (1ULL << 3),        (1ULL << 3),
    (1ULL << 4),        (1ULL << 4),        (1ULL << 5),        (1ULL << 5),
    (1ULL << 6),        (1ULL << 6),        (1ULL << 7),        (1ULL << 7),
    (1ULL << 8),        (1ULL << 8),        (1ULL << 9),        (1ULL << 9),
    (1ULL << 10),       (1ULL << 10),       (1ULL << 11),       (1ULL << 11),
    (1ULL << 12),       (1ULL << 12),       (1ULL << 13),       (1ULL << 13),
    (1ULL << 14),       (1ULL << 14),       (1ULL << 15),       (1ULL << 15),
    (1ULL << 16),       (1ULL << 16),       (1ULL << 17),       (1ULL << 17),
    (1ULL << 18),       (1ULL << 18),       (1ULL << 19),       (1ULL << 19),
    (1ULL << 20),       (1ULL << 20),       (1ULL << 21),       (1ULL << 21),
    (1ULL << 22),       (1ULL << 22),       (1ULL << 23),       (1ULL << 23),
    (1ULL << 24),       (1ULL << 24),       (1ULL << 25),       (1ULL << 25),
    (1ULL << 26),       (1ULL << 26),       (1ULL << 27),       (1ULL << 27),
    (1ULL << 28),       (1ULL << 28),       (1ULL << 29),       (1ULL << 29),
    (1ULL << 30),       (1ULL << 30),       (1ULL << 31),       (1ULL << 31),
    1.0 / (1ULL << 32), 1.0 / (1ULL << 32), 1.0 / (1ULL << 31), 1.0 / (1ULL << 31),
    1.0 / (1ULL << 30), 1.0 / (1ULL << 30), 1.0 / (1ULL << 29), 1.0 / (1ULL << 29),
    1.0 / (1ULL << 28), 1.0 / (1ULL << 28), 1.0 / (1ULL << 27), 1.0 / (1ULL << 27),
    1.0 / (1ULL << 26), 1.0 / (1ULL << 26), 1.0 / (1ULL << 25), 1.0 / (1ULL << 25),
    1.0 / (1ULL << 24), 1.0 / (1ULL << 24), 1.0 / (1ULL << 23), 1.0 / (1ULL << 23),
    1.0 / (1ULL << 22), 1.0 / (1ULL << 22), 1.0 / (1ULL << 21), 1.0 / (1ULL << 21),
    1.0 / (1ULL << 20), 1.0 / (1ULL << 20), 1.0 / (1ULL << 19), 1.0 / (1ULL << 19),
    1.0 / (1ULL << 18), 1.0 / (1ULL << 18), 1.0 / (1ULL << 17), 1.0 / (1ULL << 17),
    1.0 / (1ULL << 16), 1.0 / (1ULL << 16), 1.0 / (1ULL << 15), 1.0 / (1ULL << 15),
    1.0 / (1ULL << 14), 1.0 / (1ULL << 14), 1.0 / (1ULL << 13), 1.0 / (1ULL << 13),
    1.0 / (1ULL << 12), 1.0 / (1ULL << 12), 1.0 / (1ULL << 11), 1.0 / (1ULL << 11),
    1.0 / (1ULL << 10), 1.0 / (1ULL << 10), 1.0 / (1ULL << 9),  1.0 / (1ULL << 9),
    1.0 / (1ULL << 8),  1.0 / (1ULL << 8),  1.0 / (1ULL << 7),  1.0 / (1ULL << 7),
    1.0 / (1ULL << 6),  1.0 / (1ULL << 6),  1.0 / (1ULL << 5),  1.0 / (1ULL << 5),
    1.0 / (1ULL << 4),  1.0 / (1ULL << 4),  1.0 / (1ULL << 3),  1.0 / (1ULL << 3),
    1.0 / (1ULL << 2),  1.0 / (1ULL << 2),  1.0 / (1ULL << 1),  1.0 / (1ULL << 1),
};

Common::Jit_data_array<float, 128> m_dequantizeTableS = {
    1.0 / (1ULL << 0),  1.0 / (1ULL << 0),  1.0 / (1ULL << 1),  1.0 / (1ULL << 1),
    1.0 / (1ULL << 2),  1.0 / (1ULL << 2),  1.0 / (1ULL << 3),  1.0 / (1ULL << 3),
    1.0 / (1ULL << 4),  1.0 / (1ULL << 4),  1.0 / (1ULL << 5),  1.0 / (1ULL << 5),
    1.0 / (1ULL << 6),  1.0 / (1ULL << 6),  1.0 / (1ULL << 7),  1.0 / (1ULL << 7),
    1.0 / (1ULL << 8),  1.0 / (1ULL << 8),  1.0 / (1ULL << 9),  1.0 / (1ULL << 9),
    1.0 / (1ULL << 10), 1.0 / (1ULL << 10), 1.0 / (1ULL << 11), 1.0 / (1ULL << 11),
    1.0 / (1ULL << 12), 1.0 / (1ULL << 12), 1.0 / (1ULL << 13), 1.0 / (1ULL << 13),
    1.0 / (1ULL << 14), 1.0 / (1ULL << 14), 1.0 / (1ULL << 15), 1.0 / (1ULL << 15),
    1.0 / (1ULL << 16), 1.0 / (1ULL << 16), 1.0 / (1ULL << 17), 1.0 / (1ULL << 17),
    1.0 / (1ULL << 18), 1.0 / (1ULL << 18), 1.0 / (1ULL << 19), 1.0 / (1ULL << 19),
    1.0 / (1ULL << 20), 1.0 / (1ULL << 20), 1.0 / (1ULL << 21), 1.0 / (1ULL << 21),
    1.0 / (1ULL << 22), 1.0 / (1ULL << 22), 1.0 / (1ULL << 23), 1.0 / (1ULL << 23),
    1.0 / (1ULL << 24), 1.0 / (1ULL << 24), 1.0 / (1ULL << 25), 1.0 / (1ULL << 25),
    1.0 / (1ULL << 26), 1.0 / (1ULL << 26), 1.0 / (1ULL << 27), 1.0 / (1ULL << 27),
    1.0 / (1ULL << 28), 1.0 / (1ULL << 28), 1.0 / (1ULL << 29), 1.0 / (1ULL << 29),
    1.0 / (1ULL << 30), 1.0 / (1ULL << 30), 1.0 / (1ULL << 31), 1.0 / (1ULL << 31),
    (1ULL << 32),       (1ULL << 32),       (1ULL << 31),       (1ULL << 31),
    (1ULL << 30),       (1ULL << 30),       (1ULL << 29),       (1ULL << 29),
    (1ULL << 28),       (1ULL << 28),       (1ULL << 27),       (1ULL << 27),
    (1ULL << 26),       (1ULL << 26),       (1ULL << 25),       (1ULL << 25),
    (1ULL << 24),       (1ULL << 24),       (1ULL << 23),       (1ULL << 23),
    (1ULL << 22),       (1ULL << 22),       (1ULL << 21),       (1ULL << 21),
    (1ULL << 20),       (1ULL << 20),       (1ULL << 19),       (1ULL << 19),
    (1ULL << 18),       (1ULL << 18),       (1ULL << 17),       (1ULL << 17),
    (1ULL << 16),       (1ULL << 16),       (1ULL << 15),       (1ULL << 15),
    (1ULL << 14),       (1ULL << 14),       (1ULL << 13),       (1ULL << 13),
    (1ULL << 12),       (1ULL << 12),       (1ULL << 11),       (1ULL << 11),
    (1ULL << 10),       (1ULL << 10),       (1ULL << 9),        (1ULL << 9),
    (1ULL << 8),        (1ULL << 8),        (1ULL << 7),        (1ULL << 7),
    (1ULL << 6),        (1ULL << 6),        (1ULL << 5),        (1ULL << 5),
    (1ULL << 4),        (1ULL << 4),        (1ULL << 3),        (1ULL << 3),
    (1ULL << 2),        (1ULL << 2),        (1ULL << 1),        (1ULL << 1),
};

Common::Jit_data_array<float, 4> m_one = {1.0f, 0.0f, 0.0f, 0.0f};
