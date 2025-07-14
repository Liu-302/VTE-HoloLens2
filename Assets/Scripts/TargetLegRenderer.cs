using UnityEngine;

public class TargetLegRenderer : MonoBehaviour
{
    [Header("Target Leg Bones")]
    public Transform leftUpperLeg;   // mixamorig:LeftUpLeg
    public Transform leftLowerLeg;   // mixamorig:LeftLeg
    public Transform leftFoot;       // mixamorig:LeftFoot

    public Transform rightUpperLeg;  // mixamorig:RightUpLeg
    public Transform rightLowerLeg;  // mixamorig:RightLeg
    public Transform rightFoot;      // mixamorig:RightFoot

    // 设置人物模型的初始姿态
    private Vector3 leftHipInitEuler = new Vector3(-85, 0, -180);
    private Vector3 leftKneeInitEuler = new Vector3(0, 0, 0);
    private Vector3 leftFootInitEuler = new Vector3(54.742f, 0, 0);

    private Vector3 rightHipInitEuler = new Vector3(-85, 0, -180);
    private Vector3 rightKneeInitEuler = new Vector3(0, 0, 0);
    private Vector3 rightFootInitEuler = new Vector3(54.741f, 0, 0);


    /// <summary>
    /// 设置 target 腿部角度（单位：度），仅绕 X 轴旋转
    /// </summary>
    public void SetTargetLegAngles(
        float leftThighAngle, float leftCalfAngle, float leftFootAngle,
        float rightThighAngle, float rightCalfAngle, float rightFootAngle)
    {
        // 左腿
        leftUpperLeg.localEulerAngles = new Vector3(leftHipInitEuler.x - leftThighAngle, leftHipInitEuler.y, leftHipInitEuler.z);
        leftLowerLeg.localEulerAngles = new Vector3(leftKneeInitEuler.x - leftThighAngle + leftCalfAngle, leftKneeInitEuler.y, leftKneeInitEuler.z);
        leftFoot.localEulerAngles = new Vector3(leftFootAngle, leftFootInitEuler.y, leftFootInitEuler.z);

        // 右腿
        rightUpperLeg.localEulerAngles = new Vector3(rightHipInitEuler.x - rightThighAngle, rightHipInitEuler.y, rightHipInitEuler.z);
        rightLowerLeg.localEulerAngles = new Vector3(rightKneeInitEuler.x - rightThighAngle + rightCalfAngle, rightKneeInitEuler.y, rightKneeInitEuler.z);
        rightFoot.localEulerAngles = new Vector3(rightFootAngle, rightFootInitEuler.y, rightFootInitEuler.z);
    }
}
