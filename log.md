# 5 May 2023



## Battery:

Sent the data to Kailash, need a report back on the size and weight of the whole thing. Maybe have a physical meeting where I discuss more about battery and BMS. Give this back to the mechanical team.

Modularity of the Battery pack and Checking the transportation rules of batteries.

On Air India site: “lithium ion batteries the Watt-hour rating must not exceed 100 Wh.”

## Power System:

Some one needs to design the circuit for the voltage regulation of the Mega and other appliances since the battery pack will have a voltage of 16V only. 

Work on kill switch and the relays of the circuit.

PCB design for the whole thing.

## Control System:

Have testing code for the sensors and thrusters, uploaded on GitHub. Need to do rough testing on them on the Oscilloscope. 

Do proper programming for the controls [lot of work].

Work with Mrinmoy and Harsha on Jetson and Arduino connection.

## Actuating:

Design of how the arm will work to carry the balls.

Working of second camera?

# 6 May 2023

*Received the pcb schematics and other documents from Pavan*

## Battery:

**Report from Kailash:** 

- size - 60% of hull
- weight - 12-13 kgs
- price - unknown yet, recheck values first.

Need to find the exact forces that will work on the body to know exactly how much thrust/current we need to work with to create optimum battery. Discuss this with Mechanical team.

Modularity of the Battery pack: shrink wrapping or other boxing method. 

Checking the transportation rules of batteries. Calling Air India and related beuracracy.

On Air India site: “lithium ion batteries the Watt-hour rating must not exceed 100 Wh.”

## Power System:

Some one needs to design the circuit for the voltage regulation of the Mega and other appliances since the battery pack will have a voltage of 16V only. 

Work on kill switch and the relays of the circuit.

PCB design for the power system.

## Control System:

Have testing code for the sensors and thrusters, uploaded on GitHub. Need to do testing of old/original code on the Oscilloscope. 

Do proper programming for the controls i.e. when the motors should move and how they should move for vectors (unique thruster position) [lot of work].

Work with Mrinmoy and Harsha on Jetson and Arduino connection. Where the control algorithm will sit.

## Actuating:

Design of how the arm will work to carry the balls.

Working of second camera?

# 8 May 2023

## Battery:

**Adarsh Saraf:**

Changing the values of the battery:

Battery specification:
Total Power: 2kW
Voltage: 16V
Current: 120A
Charge: 80 Ah

In-rush current: 155 A [Tentative]

Transient duration: 1.5 s

Modularity of the Battery pack & shrink wrapping [will factor in the price and transportation]

Checking the transportation rules of batteries. Calling Air India and related beuracracy. Ask other teams how they do it? [Vishwa] [Logistics]

On Air India site: “lithium ion batteries the Watt-hour rating must not exceed 100 Wh.”

**Varun Pokala:**

Figure out if the old battery is working. Charge it. Find the configuration and the specifications.

## Power System:

**Soumik Rao & Varun Pokala:**

Work on kill switch and the relays for the circuit.

PCB design for the power system.

## Control System:

**Adarsh Saraf & Ishna Jain:**

Have testing code for the sensors and thrusters, uploaded on GitHub. Need to do testing of old/original code on the Oscilloscope. Work out the programming for the sensors and thruster movement. [Adarsh]

Work with Mrinmoy and Harsha on Jetson and Arduino communication. Figure out where the control algorithm will sit. [Ishna]


# 9 May 2023

## Battery:

IITB uses LiPo batteries which it buys in Singapore itself. Do we shift to LiPo or buy Li-on there?

# 10 May 2023

## Battery:

I checked on the IITB-AUV website they seemed to be using a muuch lower capacity battery for their use. But since we want higher testing times we made the choice of higher capacity.
ITU (turkey AUV Team) specs:
 - 4s1p 7000mAh Li-Po x2
 - that means 14.8V & 14Ah battery.

IITB specs:
 - 16V & 120A but 16Ah x2
 - Li-Po batteries

Talked to Kailash bhaiya, he said other than Lithium Phosphate all other LiPos can use the same BMS as Li-on.
To-do next:
 - Get the quotation and size for Li-on battery.
 - Talk to airlines and airport authorities about it.[Transport by sea, air cargo dhl]
 - Find the inrush current for BMS, ask bhaiya again.
 - Find Li-Po to purchase now.
 - Experiment with the thruster and battery to find how long it lasts.
 - Mechanical team need to build a CFD to give idea of how much power is need underwater.


