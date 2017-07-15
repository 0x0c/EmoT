// Generated with Weka 3.6.12
//
// This code is public domain and comes with no warranty.
//
// Timestamp: Sun Jul 16 02:25:06 JST 2017

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
    
    return PoseDetector.java.classify(s);
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
    return "Auto-generated classifier wrapper, based on weka.classifiers.trees.J48 (generated with Weka 3.6.12).\n" + this.getClass().getName() + "/PoseDetector.java";
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

class PoseDetector {

  public static double classify(Object[] i)
    throws Exception {

    double p = Double.NaN;
    p = PoseDetector.N3bb25aa634(i);
    return p;
  }
  static double N3bb25aa634(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 0;
      } else if (((Double) i[1]).doubleValue() <= 11708.0) {
    p = PoseDetector.N3a5d66e835(i);
    } else if (((Double) i[1]).doubleValue() > 11708.0) {
    p = PoseDetector.N567172fc43(i);
    } 
    return p;
  }
  static double N3a5d66e835(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 3;
    } else if (((Double) i[2]).doubleValue() <= 9112.0) {
      p = 3;
    } else if (((Double) i[2]).doubleValue() > 9112.0) {
    p = PoseDetector.N4a0f274736(i);
    } 
    return p;
  }
  static double N4a0f274736(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 1;
    } else if (((Double) i[1]).doubleValue() <= 10974.0) {
    p = PoseDetector.N28dbcc4d37(i);
    } else if (((Double) i[1]).doubleValue() > 10974.0) {
    p = PoseDetector.N32a6d5b42(i);
    } 
    return p;
  }
  static double N28dbcc4d37(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 1;
    } else if (((Double) i[2]).doubleValue() <= 9974.0) {
      p = 1;
    } else if (((Double) i[2]).doubleValue() > 9974.0) {
    p = PoseDetector.N7641e82f38(i);
    } 
    return p;
  }
  static double N7641e82f38(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 1;
    } else if (((Double) i[1]).doubleValue() <= 10889.0) {
      p = 1;
    } else if (((Double) i[1]).doubleValue() > 10889.0) {
    p = PoseDetector.N60f2a25039(i);
    } 
    return p;
  }
  static double N60f2a25039(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 1;
    } else if (((Double) i[2]).doubleValue() <= 10129.0) {
    p = PoseDetector.N597e63e940(i);
    } else if (((Double) i[2]).doubleValue() > 10129.0) {
      p = 0;
    } 
    return p;
  }
  static double N597e63e940(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 1;
    } else if (((Double) i[5]).doubleValue() <= 13809.0) {
    p = PoseDetector.N78d183e541(i);
    } else if (((Double) i[5]).doubleValue() > 13809.0) {
      p = 0;
    } 
    return p;
  }
  static double N78d183e541(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 0;
    } else if (((Double) i[4]).doubleValue() <= 12302.0) {
      p = 0;
    } else if (((Double) i[4]).doubleValue() > 12302.0) {
      p = 1;
    } 
    return p;
  }
  static double N32a6d5b42(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 1;
    } else if (((Double) i[2]).doubleValue() <= 9922.0) {
      p = 1;
    } else if (((Double) i[2]).doubleValue() > 9922.0) {
      p = 0;
    } 
    return p;
  }
  static double N567172fc43(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 2;
    } else if (((Double) i[2]).doubleValue() <= 9112.0) {
    p = PoseDetector.N32342aba44(i);
    } else if (((Double) i[2]).doubleValue() > 9112.0) {
      p = 5;
    } 
    return p;
  }
  static double N32342aba44(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 4;
    } else if (((Double) i[2]).doubleValue() <= 8343.0) {
    p = PoseDetector.N7ee1331545(i);
    } else if (((Double) i[2]).doubleValue() > 8343.0) {
    p = PoseDetector.Nbd25a1647(i);
    } 
    return p;
  }
  static double N7ee1331545(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 4;
    } else if (((Double) i[1]).doubleValue() <= 12895.0) {
      p = 4;
    } else if (((Double) i[1]).doubleValue() > 12895.0) {
    p = PoseDetector.N72e0e8c646(i);
    } 
    return p;
  }
  static double N72e0e8c646(Object []i) {
    double p = Double.NaN;
    if (i[2] == null) {
      p = 4;
    } else if (((Double) i[2]).doubleValue() <= 8299.0) {
      p = 4;
    } else if (((Double) i[2]).doubleValue() > 8299.0) {
      p = 2;
    } 
    return p;
  }
  static double Nbd25a1647(Object []i) {
    double p = Double.NaN;
    if (i[5] == null) {
      p = 2;
    } else if (((Double) i[5]).doubleValue() <= 13413.0) {
    p = PoseDetector.N1f18606a48(i);
    } else if (((Double) i[5]).doubleValue() > 13413.0) {
    p = PoseDetector.N87ddeea50(i);
    } 
    return p;
  }
  static double N1f18606a48(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 2;
    } else if (((Double) i[4]).doubleValue() <= 12206.0) {
    p = PoseDetector.N7961df1849(i);
    } else if (((Double) i[4]).doubleValue() > 12206.0) {
      p = 2;
    } 
    return p;
  }
  static double N7961df1849(Object []i) {
    double p = Double.NaN;
    if (i[4] == null) {
      p = 4;
    } else if (((Double) i[4]).doubleValue() <= 12142.0) {
      p = 4;
    } else if (((Double) i[4]).doubleValue() > 12142.0) {
      p = 2;
    } 
    return p;
  }
  static double N87ddeea50(Object []i) {
    double p = Double.NaN;
    if (i[1] == null) {
      p = 4;
    } else if (((Double) i[1]).doubleValue() <= 12962.0) {
      p = 4;
    } else if (((Double) i[1]).doubleValue() > 12962.0) {
      p = 2;
    } 
    return p;
  }
}