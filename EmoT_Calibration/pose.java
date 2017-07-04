// Generated with Weka 3.6.12
//
// This code is public domain and comes with no warranty.
//
// Timestamp: Wed Jul 05 01:07:21 JST 2017

package weka.classifiers;

import weka.core.Attribute;
import weka.core.Capabilities;
import weka.core.Capabilities.Capability;
import weka.core.Instance;
import weka.core.Instances;
import weka.core.RevisionUtils;
import weka.classifiers.Classifier;

public class WekaWrapper
  extends Classifier {

  /**
   * Returns only the toString() method.
   *
   * @return a string describing the classifier
   */
  public String globalInfo() {
    return toString();
  }

  /**
   * Returns the capabilities of this classifier.
   *
   * @return the capabilities
   */
  public Capabilities getCapabilities() {
    weka.core.Capabilities result = new weka.core.Capabilities(this);

    result.enable(weka.core.Capabilities.Capability.NOMINAL_ATTRIBUTES);
    result.enable(weka.core.Capabilities.Capability.NUMERIC_ATTRIBUTES);
    result.enable(weka.core.Capabilities.Capability.DATE_ATTRIBUTES);
    result.enable(weka.core.Capabilities.Capability.MISSING_VALUES);
    result.enable(weka.core.Capabilities.Capability.NOMINAL_CLASS);
    result.enable(weka.core.Capabilities.Capability.MISSING_CLASS_VALUES);

    result.setMinimumNumberInstances(0);

    return result;
  }

  /**
   * only checks the data against its capabilities.
   *
   * @param i the training data
   */
  public void buildClassifier(Instances i) throws Exception {
    // can classifier handle the data?
    getCapabilities().testWithFail(i);
  }

  /**
   * Classifies the given instance.
   *
   * @param i the instance to classify
   * @return the classification result
   */
  public double classifyInstance(Instance i) throws Exception {
    Object[] s = new Object[i.numAttributes()];
    
    for (int j = 0; j < s.length; j++) {
      if (!i.isMissing(j)) {
        if (i.attribute(j).isNominal())
          s[j] = new String(i.stringValue(j));
        else if (i.attribute(j).isNumeric())
          s[j] = new Double(i.value(j));
      }
    }
    
    // set class value to missing
    s[i.classIndex()] = null;
    
    return SourcedJ48.classify(s);
  }

  /**
   * Returns the revision string.
   * 
   * @return        the revision
   */
  public String getRevision() {
    return RevisionUtils.extract("1.0");
  }

  /**
   * Returns only the classnames and what classifier it is based on.
   *
   * @return a short description
   */
  public String toString() {
    return "Auto-generated classifier wrapper, based on weka.classifiers.trees.J48 (generated with Weka 3.6.12).\n" + this.getClass().getName() + "/SourcedJ48";
  }

  /**
   * Runs the classfier from commandline.
   *
   * @param args the commandline arguments
   */
  public static void main(String args[]) {
    runClassifier(new WekaWrapper(), args);
  }
}

class SourcedJ48 {

  public static double classify(Object[] i)
    throws Exception {

    double p = Double.NaN;
    p = SourcedJ48.N69e2c341264(i);
    return p;
  }
  static double N69e2c341264(Object []i) {
    double p = Double.NaN;
    if (i[3] == null) {
      p = 1;
    } else if (((Double) i[3]).doubleValue() <= 10208.0) {
    p = SourcedJ48.N268116b6265(i);
    } else if (((Double) i[3]).doubleValue() > 10208.0) {
    p = SourcedJ48.N4fd1b3bc281(i);
    } 
    return p;
  }
  static double N268116b6265(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 8;
    } else if (((Double) i[5]).doubleValue() <= 10367.0) {
    p = SourcedJ48.N64fa1a79266(i);
    } else if (((Double) i[5]).doubleValue() > 10367.0) {
    p = SourcedJ48.N5a808671279(i);
    } 
    return p;
  }
  static double N64fa1a79266(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 8;
    } else if (((Double) i[1]).doubleValue() <= 10287.0) {
    p = SourcedJ48.N5fe031b9267(i);
    } else if (((Double) i[1]).doubleValue() > 10287.0) {
    p = SourcedJ48.N63c4068b275(i);
    } 
    return p;
  }
  static double N5fe031b9267(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 8;
    } else if (((Double) i[5]).doubleValue() <= 9745.0) {
    p = SourcedJ48.N77e099db268(i);
    } else if (((Double) i[5]).doubleValue() > 9745.0) {
    p = SourcedJ48.N4ee1d6a3272(i);
    } 
    return p;
  }
  static double N77e099db268(Object []i) {
    double p = Double.NaN;
    if (i[3] == null) {
      p = 8;
    } else if (((Double) i[3]).doubleValue() <= 9922.0) {
    p = SourcedJ48.N3a953659269(i);
    } else if (((Double) i[3]).doubleValue() > 9922.0) {
      p = 2;
    } 
    return p;
  }
  static double N3a953659269(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 5;
    } else if (((Double) i[2]).doubleValue() <= 6196.0) {
    p = SourcedJ48.N1a232b1b270(i);
    } else if (((Double) i[2]).doubleValue() > 6196.0) {
      p = 8;
    } 
    return p;
  }
  static double N1a232b1b270(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 5;
    } else if (((Double) i[2]).doubleValue() <= 6145.0) {
      p = 5;
    } else if (((Double) i[2]).doubleValue() > 6145.0) {
    p = SourcedJ48.N7ae30704271(i);
    } 
    return p;
  }
  static double N7ae30704271(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 5;
    } else if (((Double) i[2]).doubleValue() <= 6179.0) {
      p = 5;
    } else if (((Double) i[2]).doubleValue() > 6179.0) {
      p = 8;
    } 
    return p;
  }
  static double N4ee1d6a3272(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 5;
    } else if (((Double) i[2]).doubleValue() <= 6332.0) {
      p = 5;
    } else if (((Double) i[2]).doubleValue() > 6332.0) {
    p = SourcedJ48.N4cd28fca273(i);
    } 
    return p;
  }
  static double N4cd28fca273(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 8;
    } else if (((Double) i[5]).doubleValue() <= 9846.0) {
      p = 8;
    } else if (((Double) i[5]).doubleValue() > 9846.0) {
    p = SourcedJ48.N13de3e2d274(i);
    } 
    return p;
  }
  static double N13de3e2d274(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 7;
    } else if (((Double) i[1]).doubleValue() <= 9897.0) {
      p = 7;
    } else if (((Double) i[1]).doubleValue() > 9897.0) {
      p = 5;
    } 
    return p;
  }
  static double N63c4068b275(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 4;
    } else if (((Double) i[5]).doubleValue() <= 9720.0) {
    p = SourcedJ48.N5a89c2d8276(i);
    } else if (((Double) i[5]).doubleValue() > 9720.0) {
    p = SourcedJ48.Na572158277(i);
    } 
    return p;
  }
  static double N5a89c2d8276(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 4;
    } else if (((Double) i[2]).doubleValue() <= 6506.0) {
      p = 4;
    } else if (((Double) i[2]).doubleValue() > 6506.0) {
      p = 2;
    } 
    return p;
  }
  static double Na572158277(Object []i) {
    double p = Double.NaN;
    if (i[3] == null) {
      p = 4;
    } else if (((Double) i[3]).doubleValue() <= 10000.0) {
    p = SourcedJ48.N5e4e1db5278(i);
    } else if (((Double) i[3]).doubleValue() > 10000.0) {
      p = 4;
    } 
    return p;
  }
  static double N5e4e1db5278(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 5;
    } else if (((Double) i[2]).doubleValue() <= 6298.0) {
      p = 5;
    } else if (((Double) i[2]).doubleValue() > 6298.0) {
      p = 4;
    } 
    return p;
  }
  static double N5a808671279(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 1;
    } else if (((Double) i[2]).doubleValue() <= 6213.0) {
      p = 1;
    } else if (((Double) i[2]).doubleValue() > 6213.0) {
    p = SourcedJ48.N2bfa9322280(i);
    } 
    return p;
  }
  static double N2bfa9322280(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 1;
    } else if (((Double) i[2]).doubleValue() <= 6281.0) {
      p = 1;
    } else if (((Double) i[2]).doubleValue() > 6281.0) {
      p = 6;
    } 
    return p;
  }
  static double N4fd1b3bc281(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 0;
    } else if (((Double) i[2]).doubleValue() <= 6454.0) {
    p = SourcedJ48.N506f2494282(i);
    } else if (((Double) i[2]).doubleValue() > 6454.0) {
    p = SourcedJ48.N6210ab7c371(i);
    } 
    return p;
  }
  static double N506f2494282(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 6;
    } else if (((Double) i[5]).doubleValue() <= 10666.0) {
    p = SourcedJ48.N30ca99cd283(i);
    } else if (((Double) i[5]).doubleValue() > 10666.0) {
    p = SourcedJ48.N1ad43115359(i);
    } 
    return p;
  }
  static double N30ca99cd283(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 6;
    } else if (((Double) i[1]).doubleValue() <= 9521.0) {
    p = SourcedJ48.N45377ac1284(i);
    } else if (((Double) i[1]).doubleValue() > 9521.0) {
    p = SourcedJ48.N793cf8e8299(i);
    } 
    return p;
  }
  static double N45377ac1284(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 6;
    } else if (((Double) i[4]).doubleValue() <= 11678.0) {
    p = SourcedJ48.N3d5c3867285(i);
    } else if (((Double) i[4]).doubleValue() > 11678.0) {
    p = SourcedJ48.N60ce12ee298(i);
    } 
    return p;
  }
  static double N3d5c3867285(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 6;
    } else if (((Double) i[2]).doubleValue() <= 6367.0) {
    p = SourcedJ48.N717b11a9286(i);
    } else if (((Double) i[2]).doubleValue() > 6367.0) {
    p = SourcedJ48.N4af13595294(i);
    } 
    return p;
  }
  static double N717b11a9286(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 6;
    } else if (((Double) i[5]).doubleValue() <= 10367.0) {
    p = SourcedJ48.N46c4a873287(i);
    } else if (((Double) i[5]).doubleValue() > 10367.0) {
    p = SourcedJ48.N190f3a51288(i);
    } 
    return p;
  }
  static double N46c4a873287(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 7;
    } else if (((Double) i[5]).doubleValue() <= 10341.0) {
      p = 7;
    } else if (((Double) i[5]).doubleValue() > 10341.0) {
      p = 6;
    } 
    return p;
  }
  static double N190f3a51288(Object []i) {
    double p = Double.NaN;
    if (i[3] == null) {
      p = 6;
    } else if (((Double) i[3]).doubleValue() <= 10694.0) {
    p = SourcedJ48.N36bda8b1289(i);
    } else if (((Double) i[3]).doubleValue() > 10694.0) {
    p = SourcedJ48.N73feb5a0292(i);
    } 
    return p;
  }
  static double N36bda8b1289(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 6;
    } else if (((Double) i[2]).doubleValue() <= 6298.0) {
    p = SourcedJ48.N5d8e188a290(i);
    } else if (((Double) i[2]).doubleValue() > 6298.0) {
      p = 6;
    } 
    return p;
  }
  static double N5d8e188a290(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 7;
    } else if (((Double) i[2]).doubleValue() <= 6281.0) {
    p = SourcedJ48.N1bed3c02291(i);
    } else if (((Double) i[2]).doubleValue() > 6281.0) {
      p = 6;
    } 
    return p;
  }
  static double N1bed3c02291(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 6;
    } else if (((Double) i[1]).doubleValue() <= 9278.0) {
      p = 6;
    } else if (((Double) i[1]).doubleValue() > 9278.0) {
      p = 7;
    } 
    return p;
  }
  static double N73feb5a0292(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 6;
    } else if (((Double) i[1]).doubleValue() <= 9399.0) {
    p = SourcedJ48.N574656de293(i);
    } else if (((Double) i[1]).doubleValue() > 9399.0) {
      p = 7;
    } 
    return p;
  }
  static double N574656de293(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 7;
    } else if (((Double) i[2]).doubleValue() <= 6281.0) {
      p = 7;
    } else if (((Double) i[2]).doubleValue() > 6281.0) {
      p = 6;
    } 
    return p;
  }
  static double N4af13595294(Object []i) {
    double p = Double.NaN;
    if (i[3] == null) {
      p = 6;
    } else if (((Double) i[3]).doubleValue() <= 10502.0) {
    p = SourcedJ48.N21f4efa3295(i);
    } else if (((Double) i[3]).doubleValue() > 10502.0) {
    p = SourcedJ48.N57a0c7bf296(i);
    } 
    return p;
  }
  static double N21f4efa3295(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 6;
    } else if (((Double) i[2]).doubleValue() <= 6402.0) {
      p = 6;
    } else if (((Double) i[2]).doubleValue() > 6402.0) {
      p = 7;
    } 
    return p;
  }
  static double N57a0c7bf296(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 6;
    } else if (((Double) i[1]).doubleValue() <= 9399.0) {
    p = SourcedJ48.N7c99f98a297(i);
    } else if (((Double) i[1]).doubleValue() > 9399.0) {
      p = 7;
    } 
    return p;
  }
  static double N7c99f98a297(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 6;
    } else if (((Double) i[4]).doubleValue() <= 11527.0) {
      p = 6;
    } else if (((Double) i[4]).doubleValue() > 11527.0) {
      p = 7;
    } 
    return p;
  }
  static double N60ce12ee298(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 6;
    } else if (((Double) i[1]).doubleValue() <= 9302.0) {
      p = 6;
    } else if (((Double) i[1]).doubleValue() > 9302.0) {
      p = 7;
    } 
    return p;
  }
  static double N793cf8e8299(Object []i) {
    double p = Double.NaN;
    if (i[3] == null) {
      p = 3;
    } else if (((Double) i[3]).doubleValue() <= 10529.0) {
    p = SourcedJ48.N11f98587300(i);
    } else if (((Double) i[3]).doubleValue() > 10529.0) {
    p = SourcedJ48.N85ed7e4321(i);
    } 
    return p;
  }
  static double N11f98587300(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 7;
    } else if (((Double) i[4]).doubleValue() <= 11557.0) {
    p = SourcedJ48.N14ad6b49301(i);
    } else if (((Double) i[4]).doubleValue() > 11557.0) {
    p = SourcedJ48.N34ed297303(i);
    } 
    return p;
  }
  static double N14ad6b49301(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 6;
    } else if (((Double) i[1]).doubleValue() <= 9620.0) {
    p = SourcedJ48.N55e903a302(i);
    } else if (((Double) i[1]).doubleValue() > 9620.0) {
      p = 7;
    } 
    return p;
  }
  static double N55e903a302(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 7;
    } else if (((Double) i[2]).doubleValue() <= 6315.0) {
      p = 7;
    } else if (((Double) i[2]).doubleValue() > 6315.0) {
      p = 6;
    } 
    return p;
  }
  static double N34ed297303(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 3;
    } else if (((Double) i[1]).doubleValue() <= 10025.0) {
    p = SourcedJ48.N2be3b933304(i);
    } else if (((Double) i[1]).doubleValue() > 10025.0) {
    p = SourcedJ48.N5708e2c0320(i);
    } 
    return p;
  }
  static double N2be3b933304(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() <= 10287.0) {
    p = SourcedJ48.N7393d9c7305(i);
    } else if (((Double) i[5]).doubleValue() > 10287.0) {
    p = SourcedJ48.N2aee2196311(i);
    } 
    return p;
  }
  static double N7393d9c7305(Object []i) {
    double p = Double.NaN;
    if (i[3] == null) {
      p = 3;
    } else if (((Double) i[3]).doubleValue() <= 10448.0) {
      p = 3;
    } else if (((Double) i[3]).doubleValue() > 10448.0) {
    p = SourcedJ48.N6fbed318306(i);
    } 
    return p;
  }
  static double N6fbed318306(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() <= 10234.0) {
    p = SourcedJ48.N591505f8307(i);
    } else if (((Double) i[5]).doubleValue() > 10234.0) {
    p = SourcedJ48.N2a6c480c310(i);
    } 
    return p;
  }
  static double N591505f8307(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 3;
    } else if (((Double) i[2]).doubleValue() <= 6332.0) {
      p = 3;
    } else if (((Double) i[2]).doubleValue() > 6332.0) {
    p = SourcedJ48.N733b0a78308(i);
    } 
    return p;
  }
  static double N733b0a78308(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 3;
    } else if (((Double) i[4]).doubleValue() <= 11800.0) {
    p = SourcedJ48.N292c8762309(i);
    } else if (((Double) i[4]).doubleValue() > 11800.0) {
      p = 7;
    } 
    return p;
  }
  static double N292c8762309(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 3;
    } else if (((Double) i[2]).doubleValue() <= 6436.0) {
      p = 3;
    } else if (((Double) i[2]).doubleValue() > 6436.0) {
      p = 2;
    } 
    return p;
  }
  static double N2a6c480c310(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 3;
    } else if (((Double) i[2]).doubleValue() <= 6230.0) {
      p = 3;
    } else if (((Double) i[2]).doubleValue() > 6230.0) {
      p = 7;
    } 
    return p;
  }
  static double N2aee2196311(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() <= 10502.0) {
    p = SourcedJ48.N77df14de312(i);
    } else if (((Double) i[5]).doubleValue() > 10502.0) {
      p = 7;
    } 
    return p;
  }
  static double N77df14de312(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 7;
    } else if (((Double) i[1]).doubleValue() <= 9795.0) {
      p = 7;
    } else if (((Double) i[1]).doubleValue() > 9795.0) {
    p = SourcedJ48.N56d3384d313(i);
    } 
    return p;
  }
  static double N56d3384d313(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 3;
    } else if (((Double) i[4]).doubleValue() <= 11861.0) {
    p = SourcedJ48.N451573c3314(i);
    } else if (((Double) i[4]).doubleValue() > 11861.0) {
    p = SourcedJ48.N7d809158318(i);
    } 
    return p;
  }
  static double N451573c3314(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() <= 10475.0) {
    p = SourcedJ48.N3632aa4315(i);
    } else if (((Double) i[5]).doubleValue() > 10475.0) {
    p = SourcedJ48.Nd8e5d13317(i);
    } 
    return p;
  }
  static double N3632aa4315(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 3;
    } else if (((Double) i[4]).doubleValue() <= 11708.0) {
    p = SourcedJ48.N638476b8316(i);
    } else if (((Double) i[4]).doubleValue() > 11708.0) {
      p = 3;
    } 
    return p;
  }
  static double N638476b8316(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 7;
    } else if (((Double) i[2]).doubleValue() <= 6367.0) {
      p = 7;
    } else if (((Double) i[2]).doubleValue() > 6367.0) {
      p = 3;
    } 
    return p;
  }
  static double Nd8e5d13317(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 7;
    } else if (((Double) i[4]).doubleValue() <= 11739.0) {
      p = 7;
    } else if (((Double) i[4]).doubleValue() > 11739.0) {
      p = 3;
    } 
    return p;
  }
  static double N7d809158318(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 3;
    } else if (((Double) i[1]).doubleValue() <= 9897.0) {
    p = SourcedJ48.N3c668c7319(i);
    } else if (((Double) i[1]).doubleValue() > 9897.0) {
      p = 7;
    } 
    return p;
  }
  static double N3c668c7319(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 3;
    } else if (((Double) i[2]).doubleValue() <= 6332.0) {
      p = 3;
    } else if (((Double) i[2]).doubleValue() > 6332.0) {
      p = 7;
    } 
    return p;
  }
  static double N5708e2c0320(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 7;
    } else if (((Double) i[2]).doubleValue() <= 6419.0) {
      p = 7;
    } else if (((Double) i[2]).doubleValue() > 6419.0) {
      p = 4;
    } 
    return p;
  }
  static double N85ed7e4321(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() <= 10103.0) {
    p = SourcedJ48.Naafbe07322(i);
    } else if (((Double) i[5]).doubleValue() > 10103.0) {
    p = SourcedJ48.N4f1e041a327(i);
    } 
    return p;
  }
  static double Naafbe07322(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 2;
    } else if (((Double) i[5]).doubleValue() <= 9496.0) {
      p = 2;
    } else if (((Double) i[5]).doubleValue() > 9496.0) {
    p = SourcedJ48.N17e4c30c323(i);
    } 
    return p;
  }
  static double N17e4c30c323(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 3;
    } else if (((Double) i[2]).doubleValue() <= 6315.0) {
    p = SourcedJ48.N2bc15515324(i);
    } else if (((Double) i[2]).doubleValue() > 6315.0) {
      p = 7;
    } 
    return p;
  }
  static double N2bc15515324(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 7;
    } else if (((Double) i[5]).doubleValue() <= 9922.0) {
      p = 7;
    } else if (((Double) i[5]).doubleValue() > 9922.0) {
    p = SourcedJ48.N21b8ec24325(i);
    } 
    return p;
  }
  static double N21b8ec24325(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() <= 10077.0) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() > 10077.0) {
    p = SourcedJ48.N739740c7326(i);
    } 
    return p;
  }
  static double N739740c7326(Object []i) {
    double p = Double.NaN;
    if (i[3] == null) {
      p = 3;
    } else if (((Double) i[3]).doubleValue() <= 10584.0) {
      p = 3;
    } else if (((Double) i[3]).doubleValue() > 10584.0) {
      p = 7;
    } 
    return p;
  }
  static double N4f1e041a327(Object []i) {
    double p = Double.NaN;
    if (i[3] == null) {
      p = 7;
    } else if (((Double) i[3]).doubleValue() <= 10611.0) {
    p = SourcedJ48.N3b9f6f8a328(i);
    } else if (((Double) i[3]).doubleValue() > 10611.0) {
    p = SourcedJ48.N7ee57968354(i);
    } 
    return p;
  }
  static double N3b9f6f8a328(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 7;
    } else if (((Double) i[4]).doubleValue() <= 11587.0) {
      p = 7;
    } else if (((Double) i[4]).doubleValue() > 11587.0) {
    p = SourcedJ48.N6053eb9a329(i);
    } 
    return p;
  }
  static double N6053eb9a329(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 3;
    } else if (((Double) i[2]).doubleValue() <= 6230.0) {
    p = SourcedJ48.N2590fcde330(i);
    } else if (((Double) i[2]).doubleValue() > 6230.0) {
    p = SourcedJ48.N60e025d8333(i);
    } 
    return p;
  }
  static double N2590fcde330(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() <= 10234.0) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() > 10234.0) {
    p = SourcedJ48.N51c96616331(i);
    } 
    return p;
  }
  static double N51c96616331(Object []i) {
    double p = Double.NaN;
    if (i[3] == null) {
      p = 7;
    } else if (((Double) i[3]).doubleValue() <= 10584.0) {
    p = SourcedJ48.N7d4d584c332(i);
    } else if (((Double) i[3]).doubleValue() > 10584.0) {
      p = 7;
    } 
    return p;
  }
  static double N7d4d584c332(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() <= 10448.0) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() > 10448.0) {
      p = 7;
    } 
    return p;
  }
  static double N60e025d8333(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 7;
    } else if (((Double) i[1]).doubleValue() <= 9897.0) {
    p = SourcedJ48.N1bd4b998334(i);
    } else if (((Double) i[1]).doubleValue() > 9897.0) {
    p = SourcedJ48.N20ba9569347(i);
    } 
    return p;
  }
  static double N1bd4b998334(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 7;
    } else if (((Double) i[4]).doubleValue() <= 11739.0) {
    p = SourcedJ48.N2ae4b86e335(i);
    } else if (((Double) i[4]).doubleValue() > 11739.0) {
    p = SourcedJ48.N6a3ccb09345(i);
    } 
    return p;
  }
  static double N2ae4b86e335(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 7;
    } else if (((Double) i[1]).doubleValue() <= 9770.0) {
    p = SourcedJ48.Ne0853c2336(i);
    } else if (((Double) i[1]).doubleValue() > 9770.0) {
      p = 7;
    } 
    return p;
  }
  static double Ne0853c2336(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() <= 10234.0) {
    p = SourcedJ48.N44b2ecc0337(i);
    } else if (((Double) i[5]).doubleValue() > 10234.0) {
    p = SourcedJ48.N279db91e339(i);
    } 
    return p;
  }
  static double N44b2ecc0337(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 3;
    } else if (((Double) i[2]).doubleValue() <= 6264.0) {
    p = SourcedJ48.N3ed5547c338(i);
    } else if (((Double) i[2]).doubleValue() > 6264.0) {
      p = 3;
    } 
    return p;
  }
  static double N3ed5547c338(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 3;
    } else if (((Double) i[1]).doubleValue() <= 9695.0) {
      p = 3;
    } else if (((Double) i[1]).doubleValue() > 9695.0) {
      p = 7;
    } 
    return p;
  }
  static double N279db91e339(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 7;
    } else if (((Double) i[2]).doubleValue() <= 6298.0) {
    p = SourcedJ48.N63e474e3340(i);
    } else if (((Double) i[2]).doubleValue() > 6298.0) {
    p = SourcedJ48.N24ef4799343(i);
    } 
    return p;
  }
  static double N63e474e3340(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 7;
    } else if (((Double) i[1]).doubleValue() <= 9720.0) {
    p = SourcedJ48.N2bb61651341(i);
    } else if (((Double) i[1]).doubleValue() > 9720.0) {
      p = 7;
    } 
    return p;
  }
  static double N2bb61651341(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 7;
    } else if (((Double) i[1]).doubleValue() <= 9695.0) {
      p = 7;
    } else if (((Double) i[1]).doubleValue() > 9695.0) {
    p = SourcedJ48.N3f733642342(i);
    } 
    return p;
  }
  static double N3f733642342(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() <= 10261.0) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() > 10261.0) {
      p = 7;
    } 
    return p;
  }
  static double N24ef4799343(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 7;
    } else if (((Double) i[1]).doubleValue() <= 9720.0) {
      p = 7;
    } else if (((Double) i[1]).doubleValue() > 9720.0) {
    p = SourcedJ48.N5945a0c0344(i);
    } 
    return p;
  }
  static double N5945a0c0344(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() <= 10584.0) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() > 10584.0) {
      p = 7;
    } 
    return p;
  }
  static double N6a3ccb09345(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() <= 10156.0) {
    p = SourcedJ48.N3d35f25c346(i);
    } else if (((Double) i[5]).doubleValue() > 10156.0) {
      p = 7;
    } 
    return p;
  }
  static double N3d35f25c346(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 3;
    } else if (((Double) i[2]).doubleValue() <= 6315.0) {
      p = 3;
    } else if (((Double) i[2]).doubleValue() > 6315.0) {
      p = 7;
    } 
    return p;
  }
  static double N20ba9569347(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 7;
    } else if (((Double) i[4]).doubleValue() <= 11708.0) {
      p = 7;
    } else if (((Double) i[4]).doubleValue() > 11708.0) {
    p = SourcedJ48.N39a73148348(i);
    } 
    return p;
  }
  static double N39a73148348(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 3;
    } else if (((Double) i[1]).doubleValue() <= 10000.0) {
    p = SourcedJ48.Nf948b8a349(i);
    } else if (((Double) i[1]).doubleValue() > 10000.0) {
      p = 7;
    } 
    return p;
  }
  static double Nf948b8a349(Object []i) {
    double p = Double.NaN;
    if (i[3] == null) {
      p = 3;
    } else if (((Double) i[3]).doubleValue() <= 10557.0) {
      p = 3;
    } else if (((Double) i[3]).doubleValue() > 10557.0) {
    p = SourcedJ48.N61551903350(i);
    } 
    return p;
  }
  static double N61551903350(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 3;
    } else if (((Double) i[1]).doubleValue() <= 9974.0) {
    p = SourcedJ48.N19dd45e1351(i);
    } else if (((Double) i[1]).doubleValue() > 9974.0) {
      p = 7;
    } 
    return p;
  }
  static double N19dd45e1351(Object []i) {
    double p = Double.NaN;
    if (i[3] == null) {
      p = 7;
    } else if (((Double) i[3]).doubleValue() <= 10584.0) {
    p = SourcedJ48.Ne16c40b352(i);
    } else if (((Double) i[3]).doubleValue() > 10584.0) {
    p = SourcedJ48.N78a0b566353(i);
    } 
    return p;
  }
  static double Ne16c40b352(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 3;
    } else if (((Double) i[1]).doubleValue() <= 9922.0) {
      p = 3;
    } else if (((Double) i[1]).doubleValue() > 9922.0) {
      p = 7;
    } 
    return p;
  }
  static double N78a0b566353(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 3;
    } else if (((Double) i[4]).doubleValue() <= 11923.0) {
      p = 3;
    } else if (((Double) i[4]).doubleValue() > 11923.0) {
      p = 7;
    } 
    return p;
  }
  static double N7ee57968354(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 7;
    } else if (((Double) i[4]).doubleValue() <= 11617.0) {
      p = 7;
    } else if (((Double) i[4]).doubleValue() > 11617.0) {
    p = SourcedJ48.Nb85dbee355(i);
    } 
    return p;
  }
  static double Nb85dbee355(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 7;
    } else if (((Double) i[5]).doubleValue() <= 10475.0) {
      p = 7;
    } else if (((Double) i[5]).doubleValue() > 10475.0) {
    p = SourcedJ48.N129ec2b356(i);
    } 
    return p;
  }
  static double N129ec2b356(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 7;
    } else if (((Double) i[4]).doubleValue() <= 11708.0) {
    p = SourcedJ48.N674ffba5357(i);
    } else if (((Double) i[4]).doubleValue() > 11708.0) {
      p = 7;
    } 
    return p;
  }
  static double N674ffba5357(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 3;
    } else if (((Double) i[1]).doubleValue() <= 9795.0) {
    p = SourcedJ48.N341242a0358(i);
    } else if (((Double) i[1]).doubleValue() > 9795.0) {
      p = 7;
    } 
    return p;
  }
  static double N341242a0358(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 7;
    } else if (((Double) i[2]).doubleValue() <= 6350.0) {
      p = 7;
    } else if (((Double) i[2]).doubleValue() > 6350.0) {
      p = 3;
    } 
    return p;
  }
  static double N1ad43115359(Object []i) {
    double p = Double.NaN;
    if (i[3] == null) {
      p = 7;
    } else if (((Double) i[3]).doubleValue() <= 10639.0) {
    p = SourcedJ48.N60e26775360(i);
    } else if (((Double) i[3]).doubleValue() > 10639.0) {
    p = SourcedJ48.N2ff66404361(i);
    } 
    return p;
  }
  static double N60e26775360(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 6;
    } else if (((Double) i[1]).doubleValue() <= 9447.0) {
      p = 6;
    } else if (((Double) i[1]).doubleValue() > 9447.0) {
      p = 7;
    } 
    return p;
  }
  static double N2ff66404361(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 0;
    } else if (((Double) i[1]).doubleValue() <= 9720.0) {
    p = SourcedJ48.N59205b35362(i);
    } else if (((Double) i[1]).doubleValue() > 9720.0) {
    p = SourcedJ48.N301ebdb8369(i);
    } 
    return p;
  }
  static double N59205b35362(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 0;
    } else if (((Double) i[4]).doubleValue() <= 11497.0) {
    p = SourcedJ48.N5b442249363(i);
    } else if (((Double) i[4]).doubleValue() > 11497.0) {
    p = SourcedJ48.N5627156e364(i);
    } 
    return p;
  }
  static double N5b442249363(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 7;
    } else if (((Double) i[5]).doubleValue() <= 10805.0) {
      p = 7;
    } else if (((Double) i[5]).doubleValue() > 10805.0) {
      p = 0;
    } 
    return p;
  }
  static double N5627156e364(Object []i) {
    double p = Double.NaN;
    if (i[3] == null) {
      p = 0;
    } else if (((Double) i[3]).doubleValue() <= 10694.0) {
    p = SourcedJ48.N1ff014f2365(i);
    } else if (((Double) i[3]).doubleValue() > 10694.0) {
    p = SourcedJ48.N1c420288367(i);
    } 
    return p;
  }
  static double N1ff014f2365(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 0;
    } else if (((Double) i[2]).doubleValue() <= 6315.0) {
    p = SourcedJ48.N4aef2c3f366(i);
    } else if (((Double) i[2]).doubleValue() > 6315.0) {
      p = 7;
    } 
    return p;
  }
  static double N4aef2c3f366(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 0;
    } else if (((Double) i[4]).doubleValue() <= 11708.0) {
      p = 0;
    } else if (((Double) i[4]).doubleValue() > 11708.0) {
      p = 7;
    } 
    return p;
  }
  static double N1c420288367(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 0;
    } else if (((Double) i[4]).doubleValue() <= 11861.0) {
      p = 0;
    } else if (((Double) i[4]).doubleValue() > 11861.0) {
    p = SourcedJ48.N31b43d36368(i);
    } 
    return p;
  }
  static double N31b43d36368(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 0;
    } else if (((Double) i[1]).doubleValue() <= 9521.0) {
      p = 0;
    } else if (((Double) i[1]).doubleValue() > 9521.0) {
      p = 7;
    } 
    return p;
  }
  static double N301ebdb8369(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 7;
    } else if (((Double) i[5]).doubleValue() <= 10721.0) {
      p = 7;
    } else if (((Double) i[5]).doubleValue() > 10721.0) {
    p = SourcedJ48.N323993b6370(i);
    } 
    return p;
  }
  static double N323993b6370(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 0;
    } else if (((Double) i[1]).doubleValue() <= 9795.0) {
      p = 0;
    } else if (((Double) i[1]).doubleValue() > 9795.0) {
      p = 7;
    } 
    return p;
  }
  static double N6210ab7c371(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 2;
    } else if (((Double) i[5]).doubleValue() <= 9871.0) {
    p = SourcedJ48.N346a8c30372(i);
    } else if (((Double) i[5]).doubleValue() > 9871.0) {
    p = SourcedJ48.N3315e4fb374(i);
    } 
    return p;
  }
  static double N346a8c30372(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 2;
    } else if (((Double) i[1]).doubleValue() <= 10287.0) {
      p = 2;
    } else if (((Double) i[1]).doubleValue() > 10287.0) {
    p = SourcedJ48.N3f19be32373(i);
    } 
    return p;
  }
  static double N3f19be32373(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 2;
    } else if (((Double) i[5]).doubleValue() <= 9745.0) {
      p = 2;
    } else if (((Double) i[5]).doubleValue() > 9745.0) {
      p = 4;
    } 
    return p;
  }
  static double N3315e4fb374(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 7;
    } else if (((Double) i[1]).doubleValue() <= 10051.0) {
    p = SourcedJ48.N626c34f0375(i);
    } else if (((Double) i[1]).doubleValue() > 10051.0) {
    p = SourcedJ48.N32b9c6f7383(i);
    } 
    return p;
  }
  static double N626c34f0375(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 7;
    } else if (((Double) i[4]).doubleValue() <= 11557.0) {
      p = 7;
    } else if (((Double) i[4]).doubleValue() > 11557.0) {
    p = SourcedJ48.N2e07ab0b376(i);
    } 
    return p;
  }
  static double N2e07ab0b376(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 7;
    } else if (((Double) i[1]).doubleValue() <= 9695.0) {
      p = 7;
    } else if (((Double) i[1]).doubleValue() > 9695.0) {
    p = SourcedJ48.N796e76c8377(i);
    } 
    return p;
  }
  static double N796e76c8377(Object []i) {
    double p = Double.NaN;
    if (i[3] == null) {
      p = 3;
    } else if (((Double) i[3]).doubleValue() <= 10777.0) {
    p = SourcedJ48.N433882c0378(i);
    } else if (((Double) i[3]).doubleValue() > 10777.0) {
      p = 7;
    } 
    return p;
  }
  static double N433882c0378(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 3;
    } else if (((Double) i[5]).doubleValue() <= 10448.0) {
    p = SourcedJ48.N33102dba379(i);
    } else if (((Double) i[5]).doubleValue() > 10448.0) {
    p = SourcedJ48.N1ccaac61381(i);
    } 
    return p;
  }
  static double N33102dba379(Object []i) {
    double p = Double.NaN;
    if (i[3] == null) {
      p = 3;
    } else if (((Double) i[3]).doubleValue() <= 10666.0) {
      p = 3;
    } else if (((Double) i[3]).doubleValue() > 10666.0) {
    p = SourcedJ48.N6b2a2886380(i);
    } 
    return p;
  }
  static double N6b2a2886380(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 3;
    } else if (((Double) i[1]).doubleValue() <= 9820.0) {
      p = 3;
    } else if (((Double) i[1]).doubleValue() > 9820.0) {
      p = 7;
    } 
    return p;
  }
  static double N1ccaac61381(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 7;
    } else if (((Double) i[2]).doubleValue() <= 6506.0) {
    p = SourcedJ48.N3dfb230b382(i);
    } else if (((Double) i[2]).doubleValue() > 6506.0) {
      p = 3;
    } 
    return p;
  }
  static double N3dfb230b382(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 3;
    } else if (((Double) i[1]).doubleValue() <= 9745.0) {
      p = 3;
    } else if (((Double) i[1]).doubleValue() > 9745.0) {
      p = 7;
    } 
    return p;
  }
  static double N32b9c6f7383(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 7;
    } else if (((Double) i[4]).doubleValue() <= 11557.0) {
      p = 7;
    } else if (((Double) i[4]).doubleValue() > 11557.0) {
    p = SourcedJ48.N42b59c25384(i);
    } 
    return p;
  }
  static double N42b59c25384(Object []i) {
    double p = Double.NaN;
    if (i[3] == null) {
      p = 4;
    } else if (((Double) i[3]).doubleValue() <= 10448.0) {
      p = 4;
    } else if (((Double) i[3]).doubleValue() > 10448.0) {
    p = SourcedJ48.N211e635a385(i);
    } 
    return p;
  }
  static double N211e635a385(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 3;
    } else if (((Double) i[2]).doubleValue() <= 6524.0) {
      p = 3;
    } else if (((Double) i[2]).doubleValue() > 6524.0) {
      p = 4;
    } 
    return p;
  }
}

