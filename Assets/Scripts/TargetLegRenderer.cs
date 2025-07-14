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

    // ��������ģ�͵ĳ�ʼ��̬
    private Vector3 leftHipInitEuler = new Vector3(-85, 0, -180);
    private Vector3 leftKneeInitEuler = new Vector3(0, 0, 0);
    private Vector3 leftFootInitEuler = new Vector3(54.742f, 0, 0);

    private Vector3 rightHipInitEuler = new Vector3(-85, 0, -180);
    private Vector3 rightKneeInitEuler = new Vector3(0, 0, 0);
    private Vector3 rightFootInitEuler = new Vector3(54.741f, 0, 0);


    /// <summary>
    /// ���� target �Ȳ��Ƕȣ���λ���ȣ������� X ����ת
    /// </summary>
    public void SetTargetLegAngles(
        float leftThighAngle, float leftCalfAngle, float leftFootAngle,
        float rightThighAngle, float rightCalfAngle, float rightFootAngle)
    {
        // ����
        leftUpperLeg.localEulerAngles = new Vector3(leftHipInitEuler.x - leftThighAngle, leftHipInitEuler.y, leftHipInitEuler.z);
        leftLowerLeg.localEulerAngles = new Vector3(leftKneeInitEuler.x - leftThighAngle + leftCalfAngle, leftKneeInitEuler.y, leftKneeInitEuler.z);
        leftFoot.localEulerAngles = new Vector3(leftFootAngle, leftFootInitEuler.y, leftFootInitEuler.z);

        // ����
        rightUpperLeg.localEulerAngles = new Vector3(rightHipInitEuler.x - rightThighAngle, rightHipInitEuler.y, rightHipInitEuler.z);
        rightLowerLeg.localEulerAngles = new Vector3(rightKneeInitEuler.x - rightThighAngle + rightCalfAngle, rightKneeInitEuler.y, rightKneeInitEuler.z);
        rightFoot.localEulerAngles = new Vector3(rightFootAngle, rightFootInitEuler.y, rightFootInitEuler.z);
    }
}
