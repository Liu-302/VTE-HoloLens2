using UnityEngine;

public class TargetLegTest : MonoBehaviour
{
    public TargetLegRenderer targetLegRenderer;

    void Start()
    {
        // ����
        float leftThigh = 30f;
        float leftCalf = 30f;
        float leftFoot = 60f;

        // ����
        float rightThigh = 0f;
        float rightCalf = 0f;
        float rightFoot = 54.741f;

        targetLegRenderer.SetTargetLegAngles(
            leftThigh, leftCalf, leftFoot,
            rightThigh, rightCalf, rightFoot
        );
    }
}
