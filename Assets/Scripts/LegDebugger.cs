using UnityEngine;

public class LegDebugger : MonoBehaviour
{
    [Header("LineRenderers for debugging")]
    public LineRenderer leftLegLine;
    public LineRenderer rightLegLine;

    [Header("Left Leg Points")]
    public Transform leftUpperLeg;
    public Transform leftMidLeg;
    public Transform leftFoot;
    public Transform leftToe;

    [Header("Right Leg Points")]
    public Transform rightUpperLeg;
    public Transform rightMidLeg;
    public Transform rightFoot;
    public Transform rightToe;

    // 控制是否使用有符号角度（true 表示使用 SignedAngle，可看到正负方向）
    public bool useSignedAngle = true;

    private float animationTime;

    // 显示角度变量
    private float leftThighAngle, leftCalfAngle, leftFootAngle;
    private float rightThighAngle, rightCalfAngle, rightFootAngle;


    void Update()
    {
        animationTime += Time.deltaTime;
        float leftLiftY = (Mathf.Sin(animationTime) + 1) * 0.1f;
        float leftFootLiftY = (Mathf.Sin(animationTime + 0.2f) + 1) * 0.1f;
        float leftLiftZ = (Mathf.Sin(animationTime) + 1) * 0.05f;
        float rightLiftY = (Mathf.Cos(animationTime) + 1) * 0.1f;
        float rightFootLiftY = (Mathf.Cos(animationTime + 0.2f) + 1) * 0.1f;
        float rightLiftZ = (Mathf.Cos(animationTime) + 1) * 0.05f;

        //水平状态下抬腿 - 左腿
        if (leftUpperLeg) leftUpperLeg.localPosition = new Vector3(-0.08207788f, 0.0f, 0.0f);
        if (leftMidLeg) leftMidLeg.localPosition = new Vector3(-0.08207788f, 0.0f + leftLiftY, 0.3f - leftLiftZ);
        if (leftFoot) leftFoot.localPosition = new Vector3(-0.08207788f, 0.0f + leftFootLiftY, 0.58f - leftLiftZ);
        if (leftToe) leftToe.localPosition = new Vector3(-0.08207788f, 0.1f + leftLiftY, 0.65f - leftLiftZ);

        //水平状态下抬腿 - 右腿
        if (rightUpperLeg) rightUpperLeg.localPosition = new Vector3(0.08207788f, 0.0f, 0.0f);
        if (rightMidLeg) rightMidLeg.localPosition = new Vector3(0.08207788f, 0.0f + rightLiftY, 0.3f - rightLiftZ);
        if (rightFoot) rightFoot.localPosition = new Vector3(0.08207788f, 0.0f + rightFootLiftY, 0.58f - rightLiftZ);
        if (rightToe) rightToe.localPosition = new Vector3(0.08207788f, 0.1f + rightLiftY, 0.65f - rightLiftZ);

        // 绘制腿线段
        DrawLegLine(leftLegLine, leftUpperLeg, leftMidLeg, leftFoot, leftToe);
        DrawLegLine(rightLegLine, rightUpperLeg, rightMidLeg, rightFoot, rightToe);

        // 角度计算
        leftThighAngle = CalculateAngleWithHorizontal(leftUpperLeg, leftMidLeg);
        leftCalfAngle = CalculateAngleWithHorizontal(leftMidLeg, leftFoot);
        leftFootAngle = CalculateAngleWithHorizontal(leftFoot, leftToe);

        rightThighAngle = CalculateAngleWithHorizontal(rightUpperLeg, rightMidLeg);
        rightCalfAngle = CalculateAngleWithHorizontal(rightMidLeg, rightFoot);
        rightFootAngle = CalculateAngleWithHorizontal(rightFoot, rightToe);
    }

    void DrawLegLine(LineRenderer line, Transform upper, Transform mid, Transform foot, Transform toe)
    {
        if (line && upper && mid && foot && toe)
        {
            line.positionCount = 4;
            line.SetPosition(0, upper.position);
            line.SetPosition(1, mid.position);
            line.SetPosition(2, foot.position);
            line.SetPosition(3, toe.position);
        }
    }

    float CalculateAngleWithHorizontal(Transform start, Transform end)
    {
        Vector3 dir = end.position - start.position;

        // 在 YZ 平面上投影（排除 X 轴方向）
        Vector3 projected = Vector3.ProjectOnPlane(dir, Vector3.right);

        if (useSignedAngle)
        {
            // 有符号角度，区分上抬（负）和下垂（正）
            return Vector3.SignedAngle(projected, Vector3.forward, Vector3.right);
        }
        else
        {
            // 无符号角度，仅返回 0° 到 180°
            return Vector3.Angle(projected, Vector3.forward);
        }
    }

    void OnGUI()
    {
        string mode = useSignedAngle ? "Signed (±)" : "Unsigned (0~180)";
        GUI.Label(new Rect(10, 0, 400, 20), $"Angle Mode: {mode}");

        GUI.Label(new Rect(10, 20, 400, 20), $"Left Thigh Angle: {leftThighAngle:F1}°");
        GUI.Label(new Rect(10, 40, 400, 20), $"Left Calf Angle:  {leftCalfAngle:F1}°");
        GUI.Label(new Rect(10, 60, 400, 20), $"Left Foot Angle:  {leftFootAngle:F1}°");

        GUI.Label(new Rect(10, 90, 400, 20), $"Right Thigh Angle: {rightThighAngle:F1}°");
        GUI.Label(new Rect(10, 110, 400, 20), $"Right Calf Angle:  {rightCalfAngle:F1}°");
        GUI.Label(new Rect(10, 130, 400, 20), $"Right Foot Angle:  {rightFootAngle:F1}°");
    }
}
