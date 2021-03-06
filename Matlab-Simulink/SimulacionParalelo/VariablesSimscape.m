p    = 7;        % Number of pole pairs
Rs   = 0.039;      % Stator resistance per phase           [Ohm]
Ls   = 2.02e-5;     % Stator self-inductance per phase, Ls  [H]
Ms   = 1e-5;     % Stator mutual inductance, Ms          [H]
psim = 0.0175;   % Maximum permanent magnet flux linkage [Wb]
Jm   = 0.0005;   % Rotor inertia                         [Kg*m^2]
Vdc  = 24;
%% Control Parameters
Ts  = 1e-5;  % Fundamental sample time            [s]
Tsc = 1e-4;  % Sample time for inner control loop [s]

Kpi = 0.01;  % Proportional gain current controller
Kii = 0.08;  % Integrator gain current controller
Kpw = 0.1;   % Proportional gain speed controller
Kiw = 15;    % Integrator gain speed controller
Kpp = 500;   % Proportional gain position controller
Kip = 300;   % Integrator gain position controller