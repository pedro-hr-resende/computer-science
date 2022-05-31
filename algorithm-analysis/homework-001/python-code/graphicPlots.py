# Authors: Pedro Ribeiro & Paulo Silva
# Description: Trendline and graphics
# Date: 28/05/2022 - Hour: 11:14

import matplotlib.pyplot as plt
import matplotlib.mlab as mlab
import numpy as np

def quadraticFit(n, times, name):

    coef = np.polyfit(n, times, 2)

    n = np.array(n)

    trendLine = coef[0] * n * n + coef[1] * n + coef[2]

    plt.title(name)
    plt.plot(n, times, "ko", n, trendLine, "--k")
    plt.grid(True)
    plt.xlabel(R"Number of elements (n)")
    plt.ylabel(R"Time (s)")
    plt.tight_layout()
    plt.show()

def linearFit(n, times, name):

    coef = np.polyfit(n, times, 1)

    n = np.array(n)

    trendLine = coef[0] * n + coef[1]

    plt.title(name)
    plt.plot(n, times, "ko", n, trendLine, "--k")
    plt.grid(True)
    plt.xlabel(R"Tamanho da entrada (n)")
    plt.ylabel(R"Tempo (s)")
    plt.tight_layout()
    plt.show()

def allGraphics(n1, n2, times1, times2, times3, times4, times5):

    coef1 = np.polyfit(n1, times1, 2)
    coef2 = np.polyfit(n2, times2, 1)
    coef3 = np.polyfit(n2, times3, 2)
    coef4 = np.polyfit(n2, times4, 1)
    coef5 = np.polyfit(n2, times5, 2)

    n1 = np.array(n1)
    n2 = np.array(n2)

    trendLine1 = coef1[0] * n1 * n1 + coef1[1] * n1 + coef1[2]
    trendLine2 = coef2[0] * n2 + coef2[1]
    trendLine3 = coef3[0] * n2 * n2 + coef3[1] * n2 + coef3[2]
    trendLine4 = coef4[0] * n2 + coef4[1]
    trendLine5 = coef5[0] * n2 * n2 + coef5[1] * n2 + coef5[2]

    # plt.plot(n1, trendLine1, label = "Insertion Sort")
    plt.plot(n2, trendLine2, label = "Merge Sort")
    plt.plot(n2, trendLine3, label = "Merge-Insertion Sort")
    plt.plot(n2, trendLine4, label = "Quick Sort")
    plt.plot(n2, trendLine5, label = "Quick-Insertion Sort")
    plt.grid(True)
    plt.xlabel(R"Number of elements (n)")
    plt.ylabel(R"Time (s)")
    plt.tight_layout()
    plt.legend()
    plt.show()