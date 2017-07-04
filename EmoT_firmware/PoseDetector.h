namespace m2d {
class PoseDetector {
  public:
    enum Pose {
      question,
      exclamation,
      arm,
      surprise,
      anxious,
      vsign,
      tengu,
      pray,
      standing
    };
    static double detect(int i[5]) {
      double p = -1;
      p = PoseDetector::N69e2c341264(i);
      return p;
    }
    static double N69e2c341264(int i[5]) {
      double p = -1;
      if (i[2] == 0) {
        p = 1;
      } else if (i[2] <= 10208.0) {
        p = PoseDetector::N268116b6265(i);
      } else if (i[2] > 10208.0) {
        p = PoseDetector::N4fd1b3bc281(i);
      }
      return p;
    }
    static double N268116b6265(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 8;
      } else if (i[4] <= 10367.0) {
        p = PoseDetector::N64fa1a79266(i);
      } else if (i[4] > 10367.0) {
        p = PoseDetector::N5a808671279(i);
      }
      return p;
    }
    static double N64fa1a79266(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 8;
      } else if (i[0] <= 10287.0) {
        p = PoseDetector::N5fe031b9267(i);
      } else if (i[0] > 10287.0) {
        p = PoseDetector::N63c4068b275(i);
      }
      return p;
    }
    static double N5fe031b9267(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 8;
      } else if (i[4] <= 9745.0) {
        p = PoseDetector::N77e099db268(i);
      } else if (i[4] > 9745.0) {
        p = PoseDetector::N4ee1d6a3272(i);
      }
      return p;
    }
    static double N77e099db268(int i[5]) {
      double p = -1;
      if (i[2] == 0) {
        p = 8;
      } else if (i[2] <= 9922.0) {
        p = PoseDetector::N3a953659269(i);
      } else if (i[2] > 9922.0) {
        p = 2;
      }
      return p;
    }
    static double N3a953659269(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 5;
      } else if (i[1] <= 6196.0) {
        p = PoseDetector::N1a232b1b270(i);
      } else if (i[1] > 6196.0) {
        p = 8;
      }
      return p;
    }
    static double N1a232b1b270(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 5;
      } else if (i[1] <= 6145.0) {
        p = 5;
      } else if (i[1] > 6145.0) {
        p = PoseDetector::N7ae30704271(i);
      }
      return p;
    }
    static double N7ae30704271(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 5;
      } else if (i[1] <= 6179.0) {
        p = 5;
      } else if (i[1] > 6179.0) {
        p = 8;
      }
      return p;
    }
    static double N4ee1d6a3272(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 5;
      } else if (i[1] <= 6332.0) {
        p = 5;
      } else if (i[1] > 6332.0) {
        p = PoseDetector::N4cd28fca273(i);
      }
      return p;
    }
    static double N4cd28fca273(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 8;
      } else if (i[4] <= 9846.0) {
        p = 8;
      } else if (i[4] > 9846.0) {
        p = PoseDetector::N13de3e2d274(i);
      }
      return p;
    }
    static double N13de3e2d274(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 7;
      } else if (i[0] <= 9897.0) {
        p = 7;
      } else if (i[0] > 9897.0) {
        p = 5;
      }
      return p;
    }
    static double N63c4068b275(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 4;
      } else if (i[4] <= 9720.0) {
        p = PoseDetector::N5a89c2d8276(i);
      } else if (i[4] > 9720.0) {
        p = PoseDetector::Na572158277(i);
      }
      return p;
    }
    static double N5a89c2d8276(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 4;
      } else if (i[1] <= 6506.0) {
        p = 4;
      } else if (i[1] > 6506.0) {
        p = 2;
      }
      return p;
    }
    static double Na572158277(int i[5]) {
      double p = -1;
      if (i[2] == 0) {
        p = 4;
      } else if (i[2] <= 10000.0) {
        p = PoseDetector::N5e4e1db5278(i);
      } else if (i[2] > 10000.0) {
        p = 4;
      }
      return p;
    }
    static double N5e4e1db5278(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 5;
      } else if (i[1] <= 6298.0) {
        p = 5;
      } else if (i[1] > 6298.0) {
        p = 4;
      }
      return p;
    }
    static double N5a808671279(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 1;
      } else if (i[1] <= 6213.0) {
        p = 1;
      } else if (i[1] > 6213.0) {
        p = PoseDetector::N2bfa9322280(i);
      }
      return p;
    }
    static double N2bfa9322280(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 1;
      } else if (i[1] <= 6281.0) {
        p = 1;
      } else if (i[1] > 6281.0) {
        p = 6;
      }
      return p;
    }
    static double N4fd1b3bc281(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 0;
      } else if (i[1] <= 6454.0) {
        p = PoseDetector::N506f2494282(i);
      } else if (i[1] > 6454.0) {
        p = PoseDetector::N6210ab7c371(i);
      }
      return p;
    }
    static double N506f2494282(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 6;
      } else if (i[4] <= 10666.0) {
        p = PoseDetector::N30ca99cd283(i);
      } else if (i[4] > 10666.0) {
        p = PoseDetector::N1ad43115359(i);
      }
      return p;
    }
    static double N30ca99cd283(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 6;
      } else if (i[0] <= 9521.0) {
        p = PoseDetector::N45377ac1284(i);
      } else if (i[0] > 9521.0) {
        p = PoseDetector::N793cf8e8299(i);
      }
      return p;
    }
    static double N45377ac1284(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 6;
      } else if (i[3] <= 11678.0) {
        p = PoseDetector::N3d5c3867285(i);
      } else if (i[3] > 11678.0) {
        p = PoseDetector::N60ce12ee298(i);
      }
      return p;
    }
    static double N3d5c3867285(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 6;
      } else if (i[1] <= 6367.0) {
        p = PoseDetector::N717b11a9286(i);
      } else if (i[1] > 6367.0) {
        p = PoseDetector::N4af13595294(i);
      }
      return p;
    }
    static double N717b11a9286(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 6;
      } else if (i[4] <= 10367.0) {
        p = PoseDetector::N46c4a873287(i);
      } else if (i[4] > 10367.0) {
        p = PoseDetector::N190f3a51288(i);
      }
      return p;
    }
    static double N46c4a873287(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 7;
      } else if (i[4] <= 10341.0) {
        p = 7;
      } else if (i[4] > 10341.0) {
        p = 6;
      }
      return p;
    }
    static double N190f3a51288(int i[5]) {
      double p = -1;
      if (i[2] == 0) {
        p = 6;
      } else if (i[2] <= 10694.0) {
        p = PoseDetector::N36bda8b1289(i);
      } else if (i[2] > 10694.0) {
        p = PoseDetector::N73feb5a0292(i);
      }
      return p;
    }
    static double N36bda8b1289(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 6;
      } else if (i[1] <= 6298.0) {
        p = PoseDetector::N5d8e188a290(i);
      } else if (i[1] > 6298.0) {
        p = 6;
      }
      return p;
    }
    static double N5d8e188a290(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 7;
      } else if (i[1] <= 6281.0) {
        p = PoseDetector::N1bed3c02291(i);
      } else if (i[1] > 6281.0) {
        p = 6;
      }
      return p;
    }
    static double N1bed3c02291(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 6;
      } else if (i[0] <= 9278.0) {
        p = 6;
      } else if (i[0] > 9278.0) {
        p = 7;
      }
      return p;
    }
    static double N73feb5a0292(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 6;
      } else if (i[0] <= 9399.0) {
        p = PoseDetector::N574656de293(i);
      } else if (i[0] > 9399.0) {
        p = 7;
      }
      return p;
    }
    static double N574656de293(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 7;
      } else if (i[1] <= 6281.0) {
        p = 7;
      } else if (i[1] > 6281.0) {
        p = 6;
      }
      return p;
    }
    static double N4af13595294(int i[5]) {
      double p = -1;
      if (i[2] == 0) {
        p = 6;
      } else if (i[2] <= 10502.0) {
        p = PoseDetector::N21f4efa3295(i);
      } else if (i[2] > 10502.0) {
        p = PoseDetector::N57a0c7bf296(i);
      }
      return p;
    }
    static double N21f4efa3295(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 6;
      } else if (i[1] <= 6402.0) {
        p = 6;
      } else if (i[1] > 6402.0) {
        p = 7;
      }
      return p;
    }
    static double N57a0c7bf296(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 6;
      } else if (i[0] <= 9399.0) {
        p = PoseDetector::N7c99f98a297(i);
      } else if (i[0] > 9399.0) {
        p = 7;
      }
      return p;
    }
    static double N7c99f98a297(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 6;
      } else if (i[3] <= 11527.0) {
        p = 6;
      } else if (i[3] > 11527.0) {
        p = 7;
      }
      return p;
    }
    static double N60ce12ee298(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 6;
      } else if (i[0] <= 9302.0) {
        p = 6;
      } else if (i[0] > 9302.0) {
        p = 7;
      }
      return p;
    }
    static double N793cf8e8299(int i[5]) {
      double p = -1;
      if (i[2] == 0) {
        p = 3;
      } else if (i[2] <= 10529.0) {
        p = PoseDetector::N11f98587300(i);
      } else if (i[2] > 10529.0) {
        p = PoseDetector::N85ed7e4321(i);
      }
      return p;
    }
    static double N11f98587300(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 7;
      } else if (i[3] <= 11557.0) {
        p = PoseDetector::N14ad6b49301(i);
      } else if (i[3] > 11557.0) {
        p = PoseDetector::N34ed297303(i);
      }
      return p;
    }
    static double N14ad6b49301(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 6;
      } else if (i[0] <= 9620.0) {
        p = PoseDetector::N55e903a302(i);
      } else if (i[0] > 9620.0) {
        p = 7;
      }
      return p;
    }
    static double N55e903a302(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 7;
      } else if (i[1] <= 6315.0) {
        p = 7;
      } else if (i[1] > 6315.0) {
        p = 6;
      }
      return p;
    }
    static double N34ed297303(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 3;
      } else if (i[0] <= 10025.0) {
        p = PoseDetector::N2be3b933304(i);
      } else if (i[0] > 10025.0) {
        p = PoseDetector::N5708e2c0320(i);
      }
      return p;
    }
    static double N2be3b933304(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 3;
      } else if (i[4] <= 10287.0) {
        p = PoseDetector::N7393d9c7305(i);
      } else if (i[4] > 10287.0) {
        p = PoseDetector::N2aee2196311(i);
      }
      return p;
    }
    static double N7393d9c7305(int i[5]) {
      double p = -1;
      if (i[2] == 0) {
        p = 3;
      } else if (i[2] <= 10448.0) {
        p = 3;
      } else if (i[2] > 10448.0) {
        p = PoseDetector::N6fbed318306(i);
      }
      return p;
    }
    static double N6fbed318306(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 3;
      } else if (i[4] <= 10234.0) {
        p = PoseDetector::N591505f8307(i);
      } else if (i[4] > 10234.0) {
        p = PoseDetector::N2a6c480c310(i);
      }
      return p;
    }
    static double N591505f8307(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 3;
      } else if (i[1] <= 6332.0) {
        p = 3;
      } else if (i[1] > 6332.0) {
        p = PoseDetector::N733b0a78308(i);
      }
      return p;
    }
    static double N733b0a78308(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 3;
      } else if (i[3] <= 11800.0) {
        p = PoseDetector::N292c8762309(i);
      } else if (i[3] > 11800.0) {
        p = 7;
      }
      return p;
    }
    static double N292c8762309(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 3;
      } else if (i[1] <= 6436.0) {
        p = 3;
      } else if (i[1] > 6436.0) {
        p = 2;
      }
      return p;
    }
    static double N2a6c480c310(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 3;
      } else if (i[1] <= 6230.0) {
        p = 3;
      } else if (i[1] > 6230.0) {
        p = 7;
      }
      return p;
    }
    static double N2aee2196311(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 3;
      } else if (i[4] <= 10502.0) {
        p = PoseDetector::N77df14de312(i);
      } else if (i[4] > 10502.0) {
        p = 7;
      }
      return p;
    }
    static double N77df14de312(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 7;
      } else if (i[0] <= 9795.0) {
        p = 7;
      } else if (i[0] > 9795.0) {
        p = PoseDetector::N56d3384d313(i);
      }
      return p;
    }
    static double N56d3384d313(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 3;
      } else if (i[3] <= 11861.0) {
        p = PoseDetector::N451573c3314(i);
      } else if (i[3] > 11861.0) {
        p = PoseDetector::N7d809158318(i);
      }
      return p;
    }
    static double N451573c3314(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 3;
      } else if (i[4] <= 10475.0) {
        p = PoseDetector::N3632aa4315(i);
      } else if (i[4] > 10475.0) {
        p = PoseDetector::Nd8e5d13317(i);
      }
      return p;
    }
    static double N3632aa4315(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 3;
      } else if (i[3] <= 11708.0) {
        p = PoseDetector::N638476b8316(i);
      } else if (i[3] > 11708.0) {
        p = 3;
      }
      return p;
    }
    static double N638476b8316(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 7;
      } else if (i[1] <= 6367.0) {
        p = 7;
      } else if (i[1] > 6367.0) {
        p = 3;
      }
      return p;
    }
    static double Nd8e5d13317(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 7;
      } else if (i[3] <= 11739.0) {
        p = 7;
      } else if (i[3] > 11739.0) {
        p = 3;
      }
      return p;
    }
    static double N7d809158318(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 3;
      } else if (i[0] <= 9897.0) {
        p = PoseDetector::N3c668c7319(i);
      } else if (i[0] > 9897.0) {
        p = 7;
      }
      return p;
    }
    static double N3c668c7319(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 3;
      } else if (i[1] <= 6332.0) {
        p = 3;
      } else if (i[1] > 6332.0) {
        p = 7;
      }
      return p;
    }
    static double N5708e2c0320(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 7;
      } else if (i[1] <= 6419.0) {
        p = 7;
      } else if (i[1] > 6419.0) {
        p = 4;
      }
      return p;
    }
    static double N85ed7e4321(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 3;
      } else if (i[4] <= 10103.0) {
        p = PoseDetector::Naafbe07322(i);
      } else if (i[4] > 10103.0) {
        p = PoseDetector::N4f1e041a327(i);
      }
      return p;
    }
    static double Naafbe07322(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 2;
      } else if (i[4] <= 9496.0) {
        p = 2;
      } else if (i[4] > 9496.0) {
        p = PoseDetector::N17e4c30c323(i);
      }
      return p;
    }
    static double N17e4c30c323(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 3;
      } else if (i[1] <= 6315.0) {
        p = PoseDetector::N2bc15515324(i);
      } else if (i[1] > 6315.0) {
        p = 7;
      }
      return p;
    }
    static double N2bc15515324(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 7;
      } else if (i[4] <= 9922.0) {
        p = 7;
      } else if (i[4] > 9922.0) {
        p = PoseDetector::N21b8ec24325(i);
      }
      return p;
    }
    static double N21b8ec24325(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 3;
      } else if (i[4] <= 10077.0) {
        p = 3;
      } else if (i[4] > 10077.0) {
        p = PoseDetector::N739740c7326(i);
      }
      return p;
    }
    static double N739740c7326(int i[5]) {
      double p = -1;
      if (i[2] == 0) {
        p = 3;
      } else if (i[2] <= 10584.0) {
        p = 3;
      } else if (i[2] > 10584.0) {
        p = 7;
      }
      return p;
    }
    static double N4f1e041a327(int i[5]) {
      double p = -1;
      if (i[2] == 0) {
        p = 7;
      } else if (i[2] <= 10611.0) {
        p = PoseDetector::N3b9f6f8a328(i);
      } else if (i[2] > 10611.0) {
        p = PoseDetector::N7ee57968354(i);
      }
      return p;
    }
    static double N3b9f6f8a328(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 7;
      } else if (i[3] <= 11587.0) {
        p = 7;
      } else if (i[3] > 11587.0) {
        p = PoseDetector::N6053eb9a329(i);
      }
      return p;
    }
    static double N6053eb9a329(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 3;
      } else if (i[1] <= 6230.0) {
        p = PoseDetector::N2590fcde330(i);
      } else if (i[1] > 6230.0) {
        p = PoseDetector::N60e025d8333(i);
      }
      return p;
    }
    static double N2590fcde330(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 3;
      } else if (i[4] <= 10234.0) {
        p = 3;
      } else if (i[4] > 10234.0) {
        p = PoseDetector::N51c96616331(i);
      }
      return p;
    }
    static double N51c96616331(int i[5]) {
      double p = -1;
      if (i[2] == 0) {
        p = 7;
      } else if (i[2] <= 10584.0) {
        p = PoseDetector::N7d4d584c332(i);
      } else if (i[2] > 10584.0) {
        p = 7;
      }
      return p;
    }
    static double N7d4d584c332(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 3;
      } else if (i[4] <= 10448.0) {
        p = 3;
      } else if (i[4] > 10448.0) {
        p = 7;
      }
      return p;
    }
    static double N60e025d8333(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 7;
      } else if (i[0] <= 9897.0) {
        p = PoseDetector::N1bd4b998334(i);
      } else if (i[0] > 9897.0) {
        p = PoseDetector::N20ba9569347(i);
      }
      return p;
    }
    static double N1bd4b998334(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 7;
      } else if (i[3] <= 11739.0) {
        p = PoseDetector::N2ae4b86e335(i);
      } else if (i[3] > 11739.0) {
        p = PoseDetector::N6a3ccb09345(i);
      }
      return p;
    }
    static double N2ae4b86e335(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 7;
      } else if (i[0] <= 9770.0) {
        p = PoseDetector::Ne0853c2336(i);
      } else if (i[0] > 9770.0) {
        p = 7;
      }
      return p;
    }
    static double Ne0853c2336(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 3;
      } else if (i[4] <= 10234.0) {
        p = PoseDetector::N44b2ecc0337(i);
      } else if (i[4] > 10234.0) {
        p = PoseDetector::N279db91e339(i);
      }
      return p;
    }
    static double N44b2ecc0337(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 3;
      } else if (i[1] <= 6264.0) {
        p = PoseDetector::N3ed5547c338(i);
      } else if (i[1] > 6264.0) {
        p = 3;
      }
      return p;
    }
    static double N3ed5547c338(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 3;
      } else if (i[0] <= 9695.0) {
        p = 3;
      } else if (i[0] > 9695.0) {
        p = 7;
      }
      return p;
    }
    static double N279db91e339(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 7;
      } else if (i[1] <= 6298.0) {
        p = PoseDetector::N63e474e3340(i);
      } else if (i[1] > 6298.0) {
        p = PoseDetector::N24ef4799343(i);
      }
      return p;
    }
    static double N63e474e3340(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 7;
      } else if (i[0] <= 9720.0) {
        p = PoseDetector::N2bb61651341(i);
      } else if (i[0] > 9720.0) {
        p = 7;
      }
      return p;
    }
    static double N2bb61651341(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 7;
      } else if (i[0] <= 9695.0) {
        p = 7;
      } else if (i[0] > 9695.0) {
        p = PoseDetector::N3f733642342(i);
      }
      return p;
    }
    static double N3f733642342(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 3;
      } else if (i[4] <= 10261.0) {
        p = 3;
      } else if (i[4] > 10261.0) {
        p = 7;
      }
      return p;
    }
    static double N24ef4799343(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 7;
      } else if (i[0] <= 9720.0) {
        p = 7;
      } else if (i[0] > 9720.0) {
        p = PoseDetector::N5945a0c0344(i);
      }
      return p;
    }
    static double N5945a0c0344(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 3;
      } else if (i[4] <= 10584.0) {
        p = 3;
      } else if (i[4] > 10584.0) {
        p = 7;
      }
      return p;
    }
    static double N6a3ccb09345(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 3;
      } else if (i[4] <= 10156.0) {
        p = PoseDetector::N3d35f25c346(i);
      } else if (i[4] > 10156.0) {
        p = 7;
      }
      return p;
    }
    static double N3d35f25c346(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 3;
      } else if (i[1] <= 6315.0) {
        p = 3;
      } else if (i[1] > 6315.0) {
        p = 7;
      }
      return p;
    }
    static double N20ba9569347(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 7;
      } else if (i[3] <= 11708.0) {
        p = 7;
      } else if (i[3] > 11708.0) {
        p = PoseDetector::N39a73148348(i);
      }
      return p;
    }
    static double N39a73148348(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 3;
      } else if (i[0] <= 10000.0) {
        p = PoseDetector::Nf948b8a349(i);
      } else if (i[0] > 10000.0) {
        p = 7;
      }
      return p;
    }
    static double Nf948b8a349(int i[5]) {
      double p = -1;
      if (i[2] == 0) {
        p = 3;
      } else if (i[2] <= 10557.0) {
        p = 3;
      } else if (i[2] > 10557.0) {
        p = PoseDetector::N61551903350(i);
      }
      return p;
    }
    static double N61551903350(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 3;
      } else if (i[0] <= 9974.0) {
        p = PoseDetector::N19dd45e1351(i);
      } else if (i[0] > 9974.0) {
        p = 7;
      }
      return p;
    }
    static double N19dd45e1351(int i[5]) {
      double p = -1;
      if (i[2] == 0) {
        p = 7;
      } else if (i[2] <= 10584.0) {
        p = PoseDetector::Ne16c40b352(i);
      } else if (i[2] > 10584.0) {
        p = PoseDetector::N78a0b566353(i);
      }
      return p;
    }
    static double Ne16c40b352(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 3;
      } else if (i[0] <= 9922.0) {
        p = 3;
      } else if (i[0] > 9922.0) {
        p = 7;
      }
      return p;
    }
    static double N78a0b566353(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 3;
      } else if (i[3] <= 11923.0) {
        p = 3;
      } else if (i[3] > 11923.0) {
        p = 7;
      }
      return p;
    }
    static double N7ee57968354(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 7;
      } else if (i[3] <= 11617.0) {
        p = 7;
      } else if (i[3] > 11617.0) {
        p = PoseDetector::Nb85dbee355(i);
      }
      return p;
    }
    static double Nb85dbee355(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 7;
      } else if (i[4] <= 10475.0) {
        p = 7;
      } else if (i[4] > 10475.0) {
        p = PoseDetector::N129ec2b356(i);
      }
      return p;
    }
    static double N129ec2b356(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 7;
      } else if (i[3] <= 11708.0) {
        p = PoseDetector::N674ffba5357(i);
      } else if (i[3] > 11708.0) {
        p = 7;
      }
      return p;
    }
    static double N674ffba5357(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 3;
      } else if (i[0] <= 9795.0) {
        p = PoseDetector::N341242a0358(i);
      } else if (i[0] > 9795.0) {
        p = 7;
      }
      return p;
    }
    static double N341242a0358(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 7;
      } else if (i[1] <= 6350.0) {
        p = 7;
      } else if (i[1] > 6350.0) {
        p = 3;
      }
      return p;
    }
    static double N1ad43115359(int i[5]) {
      double p = -1;
      if (i[2] == 0) {
        p = 7;
      } else if (i[2] <= 10639.0) {
        p = PoseDetector::N60e26775360(i);
      } else if (i[2] > 10639.0) {
        p = PoseDetector::N2ff66404361(i);
      }
      return p;
    }
    static double N60e26775360(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 6;
      } else if (i[0] <= 9447.0) {
        p = 6;
      } else if (i[0] > 9447.0) {
        p = 7;
      }
      return p;
    }
    static double N2ff66404361(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 0;
      } else if (i[0] <= 9720.0) {
        p = PoseDetector::N59205b35362(i);
      } else if (i[0] > 9720.0) {
        p = PoseDetector::N301ebdb8369(i);
      }
      return p;
    }
    static double N59205b35362(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 0;
      } else if (i[3] <= 11497.0) {
        p = PoseDetector::N5b442249363(i);
      } else if (i[3] > 11497.0) {
        p = PoseDetector::N5627156e364(i);
      }
      return p;
    }
    static double N5b442249363(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 7;
      } else if (i[4] <= 10805.0) {
        p = 7;
      } else if (i[4] > 10805.0) {
        p = 0;
      }
      return p;
    }
    static double N5627156e364(int i[5]) {
      double p = -1;
      if (i[2] == 0) {
        p = 0;
      } else if (i[2] <= 10694.0) {
        p = PoseDetector::N1ff014f2365(i);
      } else if (i[2] > 10694.0) {
        p = PoseDetector::N1c420288367(i);
      }
      return p;
    }
    static double N1ff014f2365(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 0;
      } else if (i[1] <= 6315.0) {
        p = PoseDetector::N4aef2c3f366(i);
      } else if (i[1] > 6315.0) {
        p = 7;
      }
      return p;
    }
    static double N4aef2c3f366(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 0;
      } else if (i[3] <= 11708.0) {
        p = 0;
      } else if (i[3] > 11708.0) {
        p = 7;
      }
      return p;
    }
    static double N1c420288367(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 0;
      } else if (i[3] <= 11861.0) {
        p = 0;
      } else if (i[3] > 11861.0) {
        p = PoseDetector::N31b43d36368(i);
      }
      return p;
    }
    static double N31b43d36368(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 0;
      } else if (i[0] <= 9521.0) {
        p = 0;
      } else if (i[0] > 9521.0) {
        p = 7;
      }
      return p;
    }
    static double N301ebdb8369(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 7;
      } else if (i[4] <= 10721.0) {
        p = 7;
      } else if (i[4] > 10721.0) {
        p = PoseDetector::N323993b6370(i);
      }
      return p;
    }
    static double N323993b6370(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 0;
      } else if (i[0] <= 9795.0) {
        p = 0;
      } else if (i[0] > 9795.0) {
        p = 7;
      }
      return p;
    }
    static double N6210ab7c371(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 2;
      } else if (i[4] <= 9871.0) {
        p = PoseDetector::N346a8c30372(i);
      } else if (i[4] > 9871.0) {
        p = PoseDetector::N3315e4fb374(i);
      }
      return p;
    }
    static double N346a8c30372(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 2;
      } else if (i[0] <= 10287.0) {
        p = 2;
      } else if (i[0] > 10287.0) {
        p = PoseDetector::N3f19be32373(i);
      }
      return p;
    }
    static double N3f19be32373(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 2;
      } else if (i[4] <= 9745.0) {
        p = 2;
      } else if (i[4] > 9745.0) {
        p = 4;
      }
      return p;
    }
    static double N3315e4fb374(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 7;
      } else if (i[0] <= 10051.0) {
        p = PoseDetector::N626c34f0375(i);
      } else if (i[0] > 10051.0) {
        p = PoseDetector::N32b9c6f7383(i);
      }
      return p;
    }
    static double N626c34f0375(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 7;
      } else if (i[3] <= 11557.0) {
        p = 7;
      } else if (i[3] > 11557.0) {
        p = PoseDetector::N2e07ab0b376(i);
      }
      return p;
    }
    static double N2e07ab0b376(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 7;
      } else if (i[0] <= 9695.0) {
        p = 7;
      } else if (i[0] > 9695.0) {
        p = PoseDetector::N796e76c8377(i);
      }
      return p;
    }
    static double N796e76c8377(int i[5]) {
      double p = -1;
      if (i[2] == 0) {
        p = 3;
      } else if (i[2] <= 10777.0) {
        p = PoseDetector::N433882c0378(i);
      } else if (i[2] > 10777.0) {
        p = 7;
      }
      return p;
    }
    static double N433882c0378(int i[5]) {
      double p = -1;
      if (i[4] == 0) {
        p = 3;
      } else if (i[4] <= 10448.0) {
        p = PoseDetector::N33102dba379(i);
      } else if (i[4] > 10448.0) {
        p = PoseDetector::N1ccaac61381(i);
      }
      return p;
    }
    static double N33102dba379(int i[5]) {
      double p = -1;
      if (i[2] == 0) {
        p = 3;
      } else if (i[2] <= 10666.0) {
        p = 3;
      } else if (i[2] > 10666.0) {
        p = PoseDetector::N6b2a2886380(i);
      }
      return p;
    }
    static double N6b2a2886380(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 3;
      } else if (i[0] <= 9820.0) {
        p = 3;
      } else if (i[0] > 9820.0) {
        p = 7;
      }
      return p;
    }
    static double N1ccaac61381(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 7;
      } else if (i[1] <= 6506.0) {
        p = PoseDetector::N3dfb230b382(i);
      } else if (i[1] > 6506.0) {
        p = 3;
      }
      return p;
    }
    static double N3dfb230b382(int i[5]) {
      double p = -1;
      if (i[0] == 0) {
        p = 3;
      } else if (i[0] <= 9745.0) {
        p = 3;
      } else if (i[0] > 9745.0) {
        p = 7;
      }
      return p;
    }
    static double N32b9c6f7383(int i[5]) {
      double p = -1;
      if (i[3] == 0) {
        p = 7;
      } else if (i[3] <= 11557.0) {
        p = 7;
      } else if (i[3] > 11557.0) {
        p = PoseDetector::N42b59c25384(i);
      }
      return p;
    }
    static double N42b59c25384(int i[5]) {
      double p = -1;
      if (i[2] == 0) {
        p = 4;
      } else if (i[2] <= 10448.0) {
        p = 4;
      } else if (i[2] > 10448.0) {
        p = PoseDetector::N211e635a385(i);
      }
      return p;
    }
    static double N211e635a385(int i[5]) {
      double p = -1;
      if (i[1] == 0) {
        p = 3;
      } else if (i[1] <= 6524.0) {
        p = 3;
      } else if (i[1] > 6524.0) {
        p = 4;
      }
      return p;
    }
};
}
