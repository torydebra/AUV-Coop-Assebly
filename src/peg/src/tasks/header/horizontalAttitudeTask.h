#ifndef HORIZONTALATTITUDETASK_H
#define HORIZONTALATTITUDETASK_H

#include "../../support/header/formulas.h"
#include "../../support/header/conversions.h"

#include "task.h"


class HorizontalAttitudeTask : public Task
{
    public:
      HorizontalAttitudeTask(int dimension, int dof, bool eqType);
      int updateMatrices(struct Transforms* const transf);
    private:
      Eigen::Vector3d phi;

      void setPhi(Eigen::Matrix4d wTv_eigen);
      void setActivation();
      void setJacobian();
      void setReference();
};

#endif // HORIZONTALATTITUDETASK_H
