//tubestage.h

#ifdef __cplusplus
class Circuit {
public:
	// Passive components
	V Vi;
	C Ci;
	C Ck;
	C Co;
	R Ro;
	R Rg;
	R Ri;
	R Rk;
	V E;

	T e;

	//Circuit description
	//->Gate
	ser S0;
	inv I0;
	par P0;
	ser S1;
	inv I1;

	//->Cathode
	par I3;

	//->Plate
	ser S2;
	inv I4;
	par P2;

	//Triode element
	Triode v;	
	
	float tubestage(float input, float tubedrive); 
	Circuit();
};
#endif

#ifdef __cplusplus
extern "C" {
#endif

void* circuit_new(void);
float tubestage_run(void* circuit, float input, float tubedrive);
void update_passive(void* circuit, T ci, T ck, T co, T Fs);
void circuit_del(void* circuit);

#ifdef __cplusplus
}
#endif
