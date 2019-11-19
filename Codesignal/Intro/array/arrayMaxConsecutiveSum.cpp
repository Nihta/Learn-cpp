/*
Cho mảng số nguyên:
    3 ≤ inputArray.length ≤ 10^5
    1 ≤ inputArray[i] ≤ 1000
Tìm tổng tối đa có thể có của k phần tử liên tiếp trong mảng
 */
#include <iostream>
#include <vector>
using namespace std;

int arrayMaxConsecutiveSum(vector<int> v, int k)
{
    // Giải sử k phần đầu tiên có tổng max
    int max = 0;
    for(int i = 0; i < k; ++i)
        max += v[i];

    for(int sum = max, i = k; i < v.size(); ++i){
        sum = sum - v[i-k] + v[i];
        if(sum > max)
            max = sum;
    }

    return max;
}

int main()
{
    vector<int> v = {18, 872, 747, 579, 38, 773, 592, 53, 14, 93, 446, 276, 476, 547, 62, 911, 444, 134, 106, 914, 229, 528, 986, 370, 723, 374, 242, 666, 740, 976, 748, 259, 252, 947, 927, 247, 405, 289, 357, 761, 949, 894, 835, 664, 996, 956, 897, 710, 66, 409, 571, 336, 188, 848, 802, 298, 486, 513, 538, 425, 367, 328, 942, 664, 951, 162, 530, 990, 337, 510, 876, 169, 548, 884, 447, 171, 187, 618, 174, 45, 753, 980, 905, 927, 133, 841, 583, 569, 998, 354, 382, 189, 105, 551, 330, 151, 29, 488, 392, 100, 138, 270, 785, 735, 875, 323, 43, 524, 603, 406, 465, 903, 176, 92, 250, 7, 118, 850, 240, 289, 625, 261, 762, 795, 103, 780, 399, 567, 722, 535, 943, 116, 940, 492, 675, 194, 144, 966, 61, 744, 233, 874, 417, 795, 363, 734, 300, 570, 548, 337, 707, 317, 218, 325, 207, 851, 719, 816, 5, 666, 753, 372, 615, 343, 586, 613, 273, 43, 99, 39, 802, 388, 166, 53, 267, 748, 513, 237, 283, 804, 159, 747, 507, 588, 77, 824, 99, 58, 615, 884, 555, 367, 115, 459, 72, 542, 87, 40, 188, 671, 937, 785, 811, 558, 70, 910, 181, 600, 371, 258, 93, 904, 605, 649, 29, 904, 216, 176, 849, 224, 975, 687, 941, 243, 112, 1000, 30, 257, 122, 813, 540, 915, 232, 577, 30, 280, 620, 404, 507, 915, 403, 376, 217, 385, 407, 891, 377, 963, 305, 891, 952, 916, 542, 300, 639, 32, 127, 84, 90, 425, 647, 879, 971, 136, 44, 58, 326, 941, 94, 873, 390, 816, 829, 671, 279, 782, 720, 882, 417, 81, 766, 925, 255, 731, 743, 474, 92, 411, 477, 761, 60, 566, 784, 819, 577, 522, 440, 550, 507, 180, 933, 968, 470, 675, 213, 220, 349, 412, 672, 489, 912, 266, 725, 737, 863, 780, 233, 323, 923, 723, 469, 445, 973, 831, 1000, 935, 947, 212, 313, 400, 54, 457, 624, 72, 800, 804, 858, 987, 660, 262, 643, 743, 820, 346, 148, 858, 251, 728, 726, 314, 119, 191, 337, 107, 656, 26, 87, 204, 200, 965, 600, 387, 511, 899, 196, 903, 114, 275, 34, 565, 20, 313, 727, 473, 647, 683, 517, 807, 78, 573, 596, 713, 834, 561, 879, 791, 714, 799, 940, 151, 300, 793, 776, 190, 173, 239, 376, 573, 987, 627, 703, 378, 182, 281, 327, 631, 440, 997, 764, 421, 136, 194, 399, 679, 330, 96, 36, 402, 448, 599, 645, 773, 950, 554, 391, 89, 924, 817, 701, 830, 383, 727, 307, 588, 636, 552, 80, 926, 881, 318, 735, 362, 251, 956, 205, 730, 123, 373, 198, 812, 598, 312, 858, 723, 98, 247, 58, 771, 7, 476, 423, 684, 72, 642, 736, 855, 562, 512, 53, 501, 754, 17, 705, 526, 780, 705, 245, 499, 38, 850, 324, 43, 892, 819, 853, 545, 920, 807, 625, 857, 308, 280, 684, 566, 615, 835, 674, 161, 659, 659, 747, 819, 616, 664, 533, 784, 402, 375, 288, 293, 378, 319, 442, 26, 808, 791, 722, 692, 81, 314, 165, 883, 284, 706, 8, 701, 519, 152, 888, 803, 634, 265, 632, 299, 356, 561, 692, 127, 585, 80, 558, 460, 405, 603, 499, 872, 495, 919, 196, 566, 265, 98, 56, 197, 983, 916, 586, 259, 216, 532, 929, 637, 769, 568, 582, 499, 441, 975, 202, 555, 178, 369, 704, 710, 724, 963, 476, 703, 522, 806, 991, 116, 616, 262, 166, 122, 101, 967, 242, 143, 158, 287, 523, 804, 779, 108, 670, 684, 987, 648, 657, 392, 593, 990, 21, 736, 891, 761, 674, 891, 878, 561, 536, 217, 661, 598, 600, 630, 221, 826, 60, 531, 181, 669, 672, 380, 944, 891, 966, 331, 466, 659, 633, 501, 302, 171, 402, 838, 140, 953, 366, 466, 542, 782, 517, 417, 202, 956, 296, 542, 701, 857, 147, 792, 23, 936, 714, 951, 373, 669, 623, 993, 246, 92, 931, 144, 391, 530, 5, 274, 655, 765, 4, 638, 395, 851, 57, 602, 311, 657, 914, 488, 407, 410, 703, 364, 425, 407, 745, 23, 818, 547, 683, 832, 955, 116, 16, 643, 753, 639, 45, 314, 99, 609, 698, 847, 876, 8, 781, 663, 629, 165, 233, 451, 590, 658, 15, 854, 845, 397, 606, 876, 606, 180, 789, 546, 24, 854, 922, 720, 853, 599, 286, 442, 655, 110, 855, 267, 280, 142, 208, 643, 824, 246, 430, 296, 828, 38, 110, 346, 243, 126, 705, 586, 440, 374, 916, 158, 836, 694, 815, 201, 514, 244, 849, 707, 44, 789, 183, 366, 80, 25, 592, 484, 230, 627, 36, 359, 935, 479, 459, 896, 326, 145, 989, 872, 967, 271, 38, 920, 284, 569, 658, 854, 205, 591, 921, 368, 567, 787, 489, 503, 636, 618, 881, 880, 320, 277, 737, 581, 114, 794, 375, 393, 120, 116, 365, 276, 501, 203, 2, 721, 563, 76, 210, 239, 675, 322, 84, 375, 483, 810, 868, 905, 131};
    int k = 671; // 345095
    cout << arrayMaxConsecutiveSum(v, k);
    return 0;
}