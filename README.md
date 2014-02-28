this is a patched version of the nuvoton-cir driver to work with a newer version of the 
Nuvoton superIO chip. The new chip called 6683B is identified by the PNP-ID NTN0533.

TODO: currently the CIR-WAKE feature is NOT supportted!

INSTALL

```bash
    dkms add .  
    dkms build -m nuvoton-cir-6683B-dkms -v 1.0  
    dkms install -m nuvoton-cir-6683B-dkms -v 1.0  
    modprobe nuvoton-cir
```
