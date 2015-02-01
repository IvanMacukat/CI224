#version 120

varying vec3 color;

void main()
{
    gl_FragColor = vec4((color.x/5.0f)+0.6f,(color.y/5.0f)+0.6f,(color.z/5.0f)+0.6f, 1.0f);
//	gl_FragColor = vec4(0.7,0.1,0.1,1.0);
//	gl_FragColor = vec4(1.0,1.0,1.0,1.0); // white
}