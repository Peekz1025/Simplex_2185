#include "AppClass.h"

float speed = 1.0f;

void Application::InitVariables(void)
{
	//init the mesh
	m_pMesh = new MyMesh();
	m_pMesh->GenerateCube(1.0f, C_BLACK);
	//m_pMesh->GenerateSphere(1.0f, 5, C_WHITE);
}
void Application::Update(void)
{
	//Update the system so it knows how much time has passed since the last call
	m_pSystem->Update();

	//Is the arcball active?
	ArcBall();

	//Is the first person camera active?
	CameraRotation();
}
void Application::Display(void)
{
	ClearScreen();

	matrix4 m4View = m_pCameraMngr->GetViewMatrix();
	matrix4 m4Projection = m_pCameraMngr->GetProjectionMatrix();
	matrix4 matx4 = IDENTITY_M4;

	//Column 1
	matx4 = glm::translate(matx4, vector3(-10.0f + speed, 0.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);

	//Column 2
	matx4 = glm::translate(matx4, vector3(1.0f, 0.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);

	//Column 3
	matx4 = glm::translate(matx4, vector3(1.0f, -3.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 2.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);

	//Column 4
	matx4 = glm::translate(matx4, vector3(1.0f, -7.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 2.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 2.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);

	//Column 5
	matx4 = glm::translate(matx4, vector3(1.0f, -6.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 2.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);

	//Column 6
	matx4 = glm::translate(matx4, vector3(1.0f, -3.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);

	//Column 7
	matx4 = glm::translate(matx4, vector3(1.0f, -5.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 2.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);

	//Column 8
	matx4 = glm::translate(matx4, vector3(1.0f, -5.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 2.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 2.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);

	//Column 9
	matx4 = glm::translate(matx4, vector3(1.0f, -5.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 2.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);

	//Column 10
	matx4 = glm::translate(matx4, vector3(1.0f, -4.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);

	//Column 11
	matx4 = glm::translate(matx4, vector3(1.0f, -3.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);
	matx4 = glm::translate(matx4, vector3(0.0f, 1.0f, 0.0f));
	m_pMesh->Render(m4Projection, m4View, matx4);

	//increase speed
	speed += 0.05;

	// draw a skybox
	m_pMeshMngr->AddSkyboxToRenderList();

	//render list call
	m_uRenderCallCount = m_pMeshMngr->Render();

	//clear the render list
	m_pMeshMngr->ClearRenderList();

	//draw gui
	DrawGUI();

	//end the current frame (internally swaps the front and back buffers)
	m_pWindow->display();
}
void Application::Release(void)
{
	SafeDelete(m_pMesh);

	//release GUI
	ShutdownGUI();
}