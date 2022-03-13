#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

#include <openvr.h>


int main() {
    // init...
    vr::EVRInitError eError = vr::VRInitError_None;
    auto m_pHMD = vr::VR_Init(&eError, vr::VRApplication_Other, "HoboVR Labs - Test");

    if (eError) {
        printf("failed to init: errno=%d\n", eError);
        vr::VR_Shutdown();
        return -eError;
    }

    printf("GetRuntimeVersion(): %s\n", m_pHMD->GetRuntimeVersion());

    printf("VRSystem* cache: %p\n", m_pHMD);
    printf("VRSystem(): %p\n", vr::VRSystem());
    printf("VRChaperone(): %p\n", vr::VRChaperone());
    printf("VRChaperoneSetup(): %p\n", vr::VRChaperoneSetup());
    printf("VRCompositor(): %p\n", vr::VRCompositor());
    printf("VROverlay(): %p\n", vr::VROverlay());
    printf("VROverlayView(): %p\n", vr::VROverlayView());
    printf("VRHeadsetView(): %p\n", vr::VRHeadsetView());
    printf("VRScreenshots(): %p\n", vr::VRScreenshots());
    printf("VRRenderModels(): %p\n", vr::VRRenderModels());
    printf("VRApplications(): %p\n", vr::VRApplications());
    printf("VRSettings(): %p\n", vr::VRSettings());
    printf("VRResources(): %p\n", vr::VRResources());
    printf("VRExtendedDisplay(): %p\n", vr::VRExtendedDisplay());
    printf("VRTrackedCamera(): %p\n", vr::VRTrackedCamera());
    printf("VRDriverManager(): %p\n", vr::VRDriverManager());
    printf("VRInput(): %p\n", vr::VRInput());
    printf("VRIOBuffer(): %p\n", vr::VRIOBuffer());
    printf("VRSpatialAnchors(): %p\n", vr::VRSpatialAnchors());
    printf("VRNotifications(): %p\n", vr::VRNotifications());
    printf("VRDebug(): %p\n", vr::VRDebug());

    // vr::TrackedDevicePose_t m_rTrackedDevicePose[ vr::k_unMaxTrackedDeviceCount ];

    // vr::VRCompositor()->WaitGetPoses(m_rTrackedDevicePose, vr::k_unMaxTrackedDeviceCount, NULL, 0 );

    // for ( int nDevice = 0; nDevice < vr::k_unMaxTrackedDeviceCount; ++nDevice ) {
    //     if ( m_rTrackedDevicePose[nDevice].bPoseIsValid ) {
    //         printf("device%d: class=%d\n", nDevice, (int)m_pHMD->GetTrackedDeviceClass(nDevice));
    //     }
    // }

    std::cin.get();

    // cleanup
    vr::VR_Shutdown();

    return 0;
}