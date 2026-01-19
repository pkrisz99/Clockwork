#pragma once

#include "eval_types.hpp"

namespace Clockwork {

// clang-format off
inline const PParam PAWN_MAT   = S(162, 160);
inline const PParam KNIGHT_MAT = S(513, 309);
inline const PParam BISHOP_MAT = S(466, 267);
inline const PParam ROOK_MAT   = S(547, 408);
inline const PParam QUEEN_MAT  = S(1082, 559);
inline const PParam TEMPO_VAL  = S(64, 13);

inline const PParam BISHOP_PAIR_VAL   = S(75, 163);
inline const PParam ROOK_OPEN_VAL     = S(114, -25);
inline const PParam ROOK_SEMIOPEN_VAL = S(41, 18);

inline const PParam DOUBLED_PAWN_VAL = S(-19, -84);

inline const PParam POTENTIAL_CHECKER_VAL = S(-66, -12);
inline const PParam OUTPOST_KNIGHT_VAL    = S(51, 40);
inline const PParam OUTPOST_BISHOP_VAL    = S(61, 25);

inline const PParam PAWN_PUSH_THREAT_KNIGHT = S(48, 4);
inline const PParam PAWN_PUSH_THREAT_BISHOP = S(57, -25);
inline const PParam PAWN_PUSH_THREAT_ROOK   = S(37, 35);
inline const PParam PAWN_PUSH_THREAT_QUEEN  = S(67, -46);

inline const std::array<PParam, 6> PAWN_PHALANX = {
    S(20, 11), S(55, 36), S(71, 70), S(170, 158), S(480, 230), S(636, 690),
};
inline const std::array<PParam, 5> DEFENDED_PAWN = {
    S(65, 41), S(58, 35), S(75, 63), S(178, 114), S(601, -14),
};
inline const std::array<PParam, 6> PASSED_PAWN = {
    S(-80, -97), S(-79, -77), S(-54, 2), S(25, 74), S(113, 206), S(307, 277),
};
inline const std::array<PParam, 6> DEFENDED_PASSED_PUSH = {
    S(41, -35), S(35, -6), S(29, 19), S(28, 63), S(93, 132), S(200, 219),
};
inline const std::array<PParam, 6> BLOCKED_PASSED_PAWN = {
    S(11, -33), S(2, 6), S(-1, -22), S(-5, -42), S(-18, -88), S(-279, -103),
};

inline const std::array<PParam, 8> FRIENDLY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(17, 109), S(-9, 88), S(-9, 34), S(-6, 8), S(3, 7), S(47, 2), S(8, -6),
};
inline const std::array<PParam, 8> ENEMY_KING_PASSED_PAWN_DISTANCE = {
    S(0, 0), S(-284, -15), S(-25, 20), S(-7, 49), S(35, 62), S(36, 81), S(44, 86), S(18, 80),
};

inline const std::array<PParam, 9> KNIGHT_MOBILITY = {
    S(8, -67), S(107, 86), S(161, 157), S(197, 188), S(245, 197), S(274, 229), S(311, 221), S(348, 223), S(395, 162),
};
inline const std::array<PParam, 14> BISHOP_MOBILITY = {
    S(-6, -128), S(61, 35), S(123, 77), S(151, 125), S(180, 154), S(198, 174), S(207, 190), S(225, 196), S(237, 207), S(256, 196), S(279, 186), S(337, 144), S(344, 141), S(407, 102),
};
inline const std::array<PParam, 15> ROOK_MOBILITY = {
    S(276, 98), S(195, 260), S(224, 278), S(244, 282), S(258, 291), S(263, 303), S(271, 311), S(282, 310), S(290, 315), S(302, 316), S(316, 315), S(328, 313), S(337, 312), S(357, 291), S(466, 196),
};
inline const std::array<PParam, 28> QUEEN_MOBILITY = {
    S(467, 100), S(526, 238), S(577, 270), S(605, 363), S(616, 423), S(632, 454), S(636, 496), S(644, 502), S(647, 526), S(653, 535), S(657, 549), S(662, 552), S(674, 540), S(679, 542), S(682, 539), S(686, 534), S(691, 528), S(691, 527), S(703, 506), S(722, 488), S(738, 468), S(755, 434), S(781, 415), S(904, 301), S(953, 249), S(948, 241), S(871, 286), S(967, 217),
};
inline const std::array<PParam, 9> KING_MOBILITY = {
    S(559, -263), S(147, -122), S(56, -47), S(36, -11), S(12, -10), S(-20, 4), S(-42, 28), S(-69, 41), S(-85, 18),
};

inline const std::array<PParam, 3> KNIGHT_KING_RING = {
    S(245, 233), S(361, 188), S(460, 126),
};
inline const std::array<PParam, 3> BISHOP_KING_RING = {
    S(469, 369), S(288, 232), S(158, 70),
};
inline const std::array<PParam, 5> ROOK_KING_RING = {
    S(321, 317), S(443, 315), S(481, 323), S(590, 370), S(747, 330),
};
inline const std::array<PParam, 6> QUEEN_KING_RING = {
    S(879, 745), S(592, 608), S(331, 462), S(139, 258), S(82, -8), S(27, -301),
};

inline const std::array<PParam, 5> PT_INNER_RING_ATTACKS = {
    S(-85, 40), S(27, -19), S(-221, -130), S(62, 36), S(-242, -154),
};
inline const std::array<PParam, 5> PT_OUTER_RING_ATTACKS = {
    S(-25, 18), S(-20, 19), S(-19, 14), S(-17, 9), S(-21, -13),
};

inline const PParam PAWN_THREAT_KNIGHT = S(244, 62);
inline const PParam PAWN_THREAT_BISHOP = S(219, 116);
inline const PParam PAWN_THREAT_ROOK   = S(204, 100);
inline const PParam PAWN_THREAT_QUEEN  = S(185, -39);

inline const PParam KNIGHT_THREAT_BISHOP = S(118, 74);
inline const PParam KNIGHT_THREAT_ROOK   = S(258, 16);
inline const PParam KNIGHT_THREAT_QUEEN  = S(156, -14);

inline const PParam BISHOP_THREAT_KNIGHT = S(115, 39);
inline const PParam BISHOP_THREAT_ROOK   = S(239, 73);
inline const PParam BISHOP_THREAT_QUEEN  = S(197, 66);

inline const std::array<PParam, 9> BISHOP_PAWNS = {
    S(2, -18), S(-4, -7), S(-4, -17), S(-10, -24), S(-15, -32), S(-21, -36), S(-24, -47), S(-29, -48), S(-37, -53),
};

inline const PParam ROOK_LINEUP = S(14, 66);

inline const std::array<PParam, 48> PAWN_PSQT = {
    S(291, 300),    S(159, 369),    S(271, 322),    S(306, 222),    S(358, 161),    S(270, 238),    S(216, 268),    S(330, 219),    //
    S(113, 187),    S(161, 236),    S(175, 183),    S(162, 102),    S(149, 78),     S(124, 116),    S(107, 157),    S(73, 172),     //
    S(85, 157),     S(90, 172),     S(97, 140),     S(101, 92),     S(93, 79),      S(62, 106),     S(47, 138),     S(28, 158),     //
    S(63, 115),     S(82, 144),     S(79, 126),     S(80, 86),      S(61, 78),      S(51, 100),     S(13, 140),     S(-2, 126),     //
    S(53, 90),      S(105, 103),    S(83, 152),     S(80, 108),     S(57, 101),     S(29, 105),     S(15, 117),     S(-6, 109),     //
    S(88, 88),      S(179, 92),     S(101, 130),    S(109, 127),    S(84, 116),     S(69, 100),     S(50, 125),     S(13, 123),     //
};
inline const std::array<PParam, 64> KNIGHT_PSQT = {
    S(-289, -42),   S(-221, 184),   S(-452, 430),   S(94, 146),     S(19, 152),     S(-112, 131),   S(-373, 193),   S(-348, 40),    //
    S(115, 118),    S(164, 119),    S(247, 80),     S(226, 113),    S(217, 126),    S(147, 122),    S(128, 129),    S(97, 105),     //
    S(186, 88),     S(203, 132),    S(256, 149),    S(216, 166),    S(187, 176),    S(128, 183),    S(134, 126),    S(111, 117),    //
    S(240, 133),    S(225, 150),    S(232, 174),    S(202, 207),    S(221, 196),    S(189, 182),    S(190, 138),    S(187, 114),    //
    S(230, 119),    S(269, 108),    S(243, 152),    S(229, 174),    S(214, 172),    S(215, 161),    S(214, 111),    S(177, 111),    //
    S(174, 93),     S(207, 89),     S(187, 125),    S(208, 151),    S(210, 145),    S(157, 133),    S(158, 99),     S(124, 80),     //
    S(187, 83),     S(210, 67),     S(182, 87),     S(179, 109),    S(168, 113),    S(146, 70),     S(152, 80),     S(109, 20),     //
    S(127, 64),     S(164, 121),    S(189, 73),     S(209, 61),     S(189, 82),     S(140, 63),     S(133, 94),     S(78, 37),      //
};
inline const std::array<PParam, 64> BISHOP_PSQT = {
    S(-35, 183),    S(-70, 164),    S(-366, 233),   S(-229, 202),   S(-194, 212),   S(-291, 241),   S(-111, 216),   S(-29, 193),    //
    S(83, 109),     S(27, 169),     S(58, 129),     S(-11, 179),    S(-22, 180),    S(32, 161),     S(60, 144),     S(43, 133),     //
    S(134, 132),    S(174, 122),    S(162, 156),    S(128, 145),    S(94, 146),     S(93, 155),     S(135, 133),    S(112, 113),    //
    S(123, 107),    S(140, 128),    S(164, 136),    S(140, 175),    S(169, 163),    S(104, 147),    S(114, 121),    S(78, 116),     //
    S(139, 83),     S(150, 109),    S(156, 129),    S(164, 151),    S(151, 158),    S(117, 147),    S(78, 129),     S(85, 97),      //
    S(157, 85),     S(193, 92),     S(208, 109),    S(156, 145),    S(148, 129),    S(151, 127),    S(160, 104),    S(99, 108),     //
    S(141, 36),     S(226, 57),     S(184, 72),     S(153, 98),     S(134, 108),    S(142, 80),     S(142, 87),     S(132, 48),     //
    S(144, 47),     S(127, 97),     S(139, 121),    S(157, 79),     S(161, 67),     S(154, 124),    S(149, 80),     S(126, 73),     //
};
inline const std::array<PParam, 64> ROOK_PSQT = {
    S(412, 242),    S(450, 249),    S(400, 276),    S(407, 259),    S(401, 261),    S(346, 273),    S(367, 273),    S(365, 275),    //
    S(310, 294),    S(373, 284),    S(457, 261),    S(388, 286),    S(387, 290),    S(344, 296),    S(264, 324),    S(262, 324),    //
    S(285, 286),    S(418, 250),    S(445, 244),    S(418, 247),    S(378, 258),    S(332, 280),    S(327, 283),    S(250, 315),    //
    S(261, 274),    S(339, 274),    S(379, 258),    S(348, 258),    S(342, 267),    S(302, 285),    S(281, 287),    S(219, 302),    //
    S(223, 228),    S(294, 239),    S(276, 254),    S(260, 247),    S(249, 256),    S(237, 282),    S(206, 272),    S(181, 270),    //
    S(191, 200),    S(255, 199),    S(255, 222),    S(235, 216),    S(237, 212),    S(211, 247),    S(201, 226),    S(159, 240),    //
    S(106, 213),    S(224, 156),    S(236, 183),    S(239, 188),    S(228, 192),    S(216, 205),    S(195, 188),    S(167, 203),    //
    S(153, 203),    S(163, 226),    S(234, 189),    S(253, 177),    S(232, 196),    S(223, 210),    S(209, 202),    S(191, 223),    //
};
inline const std::array<PParam, 64> QUEEN_PSQT = {
    S(456, 410),    S(547, 335),    S(522, 374),    S(436, 480),    S(449, 445),    S(442, 438),    S(483, 367),    S(371, 453),    //
    S(481, 441),    S(431, 536),    S(424, 551),    S(279, 616),    S(287, 608),    S(352, 567),    S(384, 481),    S(394, 467),    //
    S(414, 498),    S(513, 483),    S(434, 552),    S(400, 570),    S(351, 576),    S(371, 526),    S(437, 436),    S(412, 408),    //
    S(493, 400),    S(488, 468),    S(449, 506),    S(419, 557),    S(413, 557),    S(410, 492),    S(463, 399),    S(455, 371),    //
    S(478, 399),    S(487, 417),    S(461, 464),    S(429, 510),    S(433, 503),    S(430, 465),    S(444, 396),    S(458, 343),    //
    S(468, 316),    S(499, 354),    S(498, 419),    S(459, 399),    S(458, 390),    S(465, 411),    S(468, 353),    S(454, 326),    //
    S(448, 195),    S(493, 156),    S(489, 242),    S(497, 292),    S(481, 318),    S(481, 285),    S(449, 334),    S(451, 317),    //
    S(408, 226),    S(453, 39),     S(455, 70),     S(483, 157),    S(487, 240),    S(490, 184),    S(480, 212),    S(434, 262),    //
};
inline const std::array<PParam, 64> KING_PSQT = {
    S(-405, -246),  S(31, 85),      S(198, 1),      S(-59, -12),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(172, -106),   S(246, 39),     S(211, 46),     S(127, -20),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(87, 37),      S(267, 54),     S(253, 41),     S(101, 14),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-181, 57),    S(162, 36),     S(68, 38),      S(26, 31),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-212, 34),    S(81, 13),      S(86, 1),       S(-34, 41),     S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-97, 20),     S(154, -13),    S(104, -4),     S(44, 13),      S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(7, -17),      S(131, -14),    S(79, -14),     S(-1, 7),       S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
    S(-127, -33),   S(-10, -8),     S(-89, -11),    S(-95, -50),    S(0, 0),        S(0, 0),        S(0, 0),        S(0, 0),        //
};

inline const std::array<std::array<PParam, 7>, 4> KING_SHELTER = {{
  {{ S(-58, 30), S(4, -30), S(55, -42), S(29, -24), S(33, -24), S(52, -42), S(8, -39), }},
  {{ S(-60, 30), S(54, -18), S(68, -43), S(14, 3), S(17, -10), S(71, -53), S(52, -28), }},
  {{ S(-55, 25), S(48, -14), S(-14, -27), S(-12, -4), S(-11, -12), S(-18, -35), S(47, -18), }},
  {{ S(-45, 13), S(21, 32), S(12, 7), S(8, 12), S(15, 6), S(21, 1), S(21, 7), }},
}};
inline const std::array<PParam, 7> BLOCKED_SHELTER_STORM = {
    S(0, 0), S(0, 0), S(-12, -84), S(40, -23), S(17, -13), S(-9, -9), S(16, 18),
};
inline const std::array<std::array<PParam, 7>, 4> SHELTER_STORM = {{
  {{ S(-25, -6), S(7, -8), S(15, -12), S(5, 1), S(13, 8), S(6, -6), S(6, -8), }},
  {{ S(-35, 5), S(-14, -9), S(10, -7), S(-6, 26), S(4, 18), S(10, -10), S(-14, -14), }},
  {{ S(3, -9), S(27, -36), S(15, -11), S(2, 4), S(7, 8), S(16, -11), S(23, -36), }},
  {{ S(-4, 16), S(13, 12), S(35, 4), S(8, -5), S(6, -4), S(33, 7), S(27, 6), }},
}};
// Epoch duration: 7.45179s
// clang-format on
}  // namespace Clockwork
