varying vec4 uv;
uniform sampler2D texture;
uniform vec4 color;


void main() {
      gl_FragColor = texture2D(texture, uv.st) * vec4(0.5,0.5,0.5,0.5);
}
