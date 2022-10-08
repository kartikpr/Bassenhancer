#pragma once

using namespace std;
namespace FX_Class {
	template <typename buffertype>
	class FX {
	public:
		static buffertype distortion(const buffertype& frame,const buffertype& preGain, const buffertype& drive) {
			return preGain * atan(drive * frame);

		}
	};
}