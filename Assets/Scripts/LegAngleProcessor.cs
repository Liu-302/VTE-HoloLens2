using UnityEngine;

public class LegAngleProcessor : MonoBehaviour
{
    [Header("Reference Transform")]
    public Transform hipsTransform; // mixamorig:Hips，对局部坐标进行转换

    // 输入数据（世界坐标）
    private Vector3 leftHip, leftKnee, leftAnkle, leftToe;
    private Vector3 rightHip, rightKnee, rightAnkle, rightToe;

    // 输出角度
    private float leftThighAngle, leftCalfAngle, leftFootAngle;
    private float rightThighAngle, rightCalfAngle, rightFootAngle;

    void Update()
    {
        // 计算左右腿与水平面的夹角（YZ 平面）
        leftThighAngle = CalculateAngleWithHorizontal(leftHip, leftKnee);
        leftCalfAngle = CalculateAngleWithHorizontal(leftKnee, leftAnkle);
        leftFootAngle = CalculateAngleWithHorizontal(leftAnkle, leftToe);

        rightThighAngle = CalculateAngleWithHorizontal(rightHip, rightKnee);
        rightCalfAngle = CalculateAngleWithHorizontal(rightKnee, rightAnkle);
        rightFootAngle = CalculateAngleWithHorizontal(rightAnkle, rightToe);
    }

    float CalculateAngleWithHorizontal(Vector3 start, Vector3 end)
    {
        Vector3 dir = end - start;

        // 投影到 YZ 平面
        Vector3 projected = Vector3.ProjectOnPlane(dir, Vector3.right);

        // 使用非负角度
        return Vector3.Angle(projected, Vector3.forward);
    }

    public void SetLegData(
        Vector3 leftHipLocal, Vector3 leftKneeLocal, Vector3 leftAnkleLocal, Vector3 leftToeLocal,
        Vector3 rightHipLocal, Vector3 rightKneeLocal, Vector3 rightAnkleLocal, Vector3 rightToeLocal)
    {
        if (hipsTransform == null)
        {
            Debug.LogError("Hips Transform 未设置！");
            return;
        }

        // “局部坐标”转为“世界坐标”
        leftHip = hipsTransform.TransformPoint(leftHipLocal);
        leftKnee = hipsTransform.TransformPoint(leftKneeLocal);
        leftAnkle = hipsTransform.TransformPoint(leftAnkleLocal);
        leftToe = hipsTransform.TransformPoint(leftToeLocal);

        rightHip = hipsTransform.TransformPoint(rightHipLocal);
        rightKnee = hipsTransform.TransformPoint(rightKneeLocal);
        rightAnkle = hipsTransform.TransformPoint(rightAnkleLocal);
        rightToe = hipsTransform.TransformPoint(rightToeLocal);
    }
}
