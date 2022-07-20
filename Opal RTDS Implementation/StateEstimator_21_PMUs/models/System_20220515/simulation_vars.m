%% Variables for State Estimator
Ts = 0.001;                      % Simulation time step

% Time of event to start in seconds
event_time_start = 10000;

% Time of event to end
event_time_end = event_time_start + 5/60;

% Noise variance
mag_variance = 0.0005;
ang_variance = 0.001*60;
% mag_variance = 0;
% ang_variance = 0;

% Random seed values for random number generators for noise generation
bus_vm_seed = abs(round(1000*randn(73,1)));
bus_va_seed = abs(round(1000*randn(73,1)));
line_imag0_seed = abs(round(1000*randn(104,1)));
line_iang0_seed = abs(round(1000*randn(104,1)));
line_imag1_seed = abs(round(1000*randn(104,1)));
line_iang1_seed = abs(round(1000*randn(104,1)));
xf_imag0_seed = abs(round(1000*randn(16,1)));
xf_iang0_seed = abs(round(1000*randn(16,1)));
xf_imag1_seed = abs(round(1000*randn(16,1)));
xf_iang1_seed = abs(round(1000*randn(16,1)));


% Limits of spoofing attack
spoof_upper_limit = pi()/9;
spoof_lower_limit = -pi()/9;

% Time in seconds after simulation start to begin spoofing attack
spoof_start_time = 180;

spoof_st.pmu_102 = spoof_start_time;
spoof_st.pmu_103 = spoof_start_time;
spoof_st.pmu_107 = spoof_start_time;
spoof_st.pmu_110 = spoof_start_time;
spoof_st.pmu_116 = spoof_start_time;
spoof_st.pmu_121 = spoof_start_time;
spoof_st.pmu_123 = spoof_start_time;

spoof_st.pmu_202 = spoof_start_time;
spoof_st.pmu_203 = spoof_start_time;
spoof_st.pmu_207 = spoof_start_time;
spoof_st.pmu_210 = spoof_start_time;
spoof_st.pmu_216 = spoof_start_time;
spoof_st.pmu_221 = spoof_start_time;
spoof_st.pmu_223 = spoof_start_time;

spoof_st.pmu_302 = spoof_start_time;
spoof_st.pmu_303 = spoof_start_time;
spoof_st.pmu_307 = spoof_start_time;
spoof_st.pmu_310 = spoof_start_time;
spoof_st.pmu_316 = spoof_start_time;
spoof_st.pmu_321 = spoof_start_time;
spoof_st.pmu_323 = spoof_start_time;

% Multiplier, use 0 to disable
en_spoofing_attack.pmu_102 = 1;
en_spoofing_attack.pmu_103 = 0;
en_spoofing_attack.pmu_107 = 0;
en_spoofing_attack.pmu_110 = 0;
en_spoofing_attack.pmu_116 = 1;
en_spoofing_attack.pmu_121 = 0;
en_spoofing_attack.pmu_123 = 0;

en_spoofing_attack.pmu_202 = 0;
en_spoofing_attack.pmu_203 = 0;
en_spoofing_attack.pmu_207 = 0;
en_spoofing_attack.pmu_210 = 0;
en_spoofing_attack.pmu_216 = 0;
en_spoofing_attack.pmu_221 = -1;
en_spoofing_attack.pmu_223 = 0;

en_spoofing_attack.pmu_302 = 0;
en_spoofing_attack.pmu_303 = 0;
en_spoofing_attack.pmu_307 = 0;
en_spoofing_attack.pmu_310 = 0;
en_spoofing_attack.pmu_316 = 0;
en_spoofing_attack.pmu_321 = 0;
en_spoofing_attack.pmu_323 = -1;
