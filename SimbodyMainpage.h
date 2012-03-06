#ifndef SimTK_SIMBODY_DOXYGEN_MAINPAGE_H_
#define SimTK_SIMBODY_DOXYGEN_MAINPAGE_H_


/** @file
This "header" file is actually just the source for Simbody's Doxygen
Mainpage, the first page that a user sees when entering the Doxygen-
generated API documentation. This is not actually included as part of the
Simbody source and it is not installed with Simbody. **/

/** @mainpage  Simbody&tm; API Reference Documentation

<h2>What is this page?</h2>
You are looking at the main page for the reference documentation of the Simbody
API. This documentation was generated by Doxygen directly from the Simbody 
source code as annotated by the original programmers so it is both accurate and
comprehensive. As you will quickly realize if you look around, this is a large 
system providing a great deal of functionality. It is, however, very easy to 
use if you know where to begin -- and this reference documentation is most
definitely \e not the place to start if you want to learn how to use 
Simbody. Instead, start with the tutorials in the Simbody User's Guide that 
you can find at the Simbody project site https://simtk.org/home/simbody, 
"Documents" tab. There is also a collection of working example programs that
come with the Simbody installation (in the examples directory). Both source
and ready-to-execute binaries of the examples are installed. If you have 
specific questions, use the Simbody help forum under the "Advanced" tab. 
You can also file bug reports and make feature requests using the tools 
provided there.

@image html isaac.png "Our hero, Sir Isaac Newton"

<h2>What is Simbody?</h2>
Simbody is a high-performance, industrial-grade open source C++ library 
providing sophisticated treatment of articulated multibody systems with special
attention to the needs of biomedical simulation. It is useful for predictive 
dynamic simulations of diverse biological systems such as neuromuscular 
biomechanical models (https://simtk.org/home/opensim) and coarse-grained 
biomolecular modeling (https://simtk.org/home/rnatoolbox). It is also well 
suited to related simulation domains such as robotic and avatar simulation and 
control, and provides real time capabilities that make it useful for 
interactive scientific simulations as well as virtual worlds and games. 

Simbody uses a minimal coordinate recursive formulation of the equations of
motion, providing computation of system dynamics to machine precision with 
O(N) computational complexity for N interconnected bodies. Arbitrary adjoined 
constraints, contact modeling, and advanced numerical methods provide fast, 
robust simulation for any mechanical or biomechanical system from machines and 
vehicles to human skeletons and macromolecules.

Simbody is part of the %SimTK biosimulation toolkit originating from Simbios, 
the NIH National Center for Physics-Based Simulation of Biological Structures 
at Stanford, funded under the NIH Roadmap for Medical Research, grant 
U54 GM072970. Related tools include 
  - Molmodel (https://simtk.org/home/molmodel), a C++ API for constructing 
    coarse-grained, Simbody-based internal coordinate models of macromolecules
    like proteins and RNA, and
  - OpenMM (https://simtk.org/home/openmm), a GPU-accelerated high-performance
    numerical library for efficient calculation of molecular force fields.
    OpenMM may be used standalone or through Molmodel.

Simbody is hosted on the simtk.org biosimulation community site,
at https://simtk.org/home/simbody and is a community resource available for
unrestricted academic, commercial, government, and personal use.

Simbody was conceived and initially implemented by Michael Sherman (Sherm), 
with substantial contributions from Peter Eastman, both of the Simbios Center 
at Stanford. Many others have contributed to the software, support, and 
documentation and we invite well-engineered community contributions.


<h2>How to use this documentation</h2>
If you know the name of the class, method, or other symbol for which you want
information, you can enter it into the search box above and click directly to 
the documentation for that symbol. You can also enter words or partial symbols 
and get a list of names that include your search key. Unfortunately Doxygen
does not currently provide a full-text search capability. Another approach is
to select the Classes tab to get an alphabetical listing of all the class 
names, and there is a tab below that providing a class hierarchy view.

If you would like to see some more logical groupings of Simbody classes
with some limited overview material, select the Modules tab to see 
groupings that made sense to the authors. You can also look at the
Related Pages to see other general topics.

<h2>License</h2>
We encourage the broadest possible use of Simbody for any purpose by using
the extremely permissive MIT License. We would appreciate some acknowledgement 
if our work has been helpful in yours, but our license does not require that.
For more information see our \ref simbody_license_page "license page".
**/


/** @page simbody_license_page  Simbody&tm; Copyright and License
<h2>Copyright and license</h2>
This license, based on the maximally-permissive MIT License, defines the 
terms under which we offer Simbody.
@verbatim
 * -------------------------------------------------------------------------- *
 *                             SimTK Simbody(tm)                              *
 * -------------------------------------------------------------------------- *
 * Simbody is part of the SimTK biosimulation toolkit originating from        *
 * Simbios, the NIH National Center for Physics-Based Simulation of           *
 * Biological Structures at Stanford, funded under the NIH Roadmap for        *
 * Medical Research, grant U54 GM072970. See https://simtk.org.               *
 *                                                                            *
 * Portions copyright (c) 2005-11 Stanford University and the Authors.        *
 * Authors: Michael Sherman, Peter Eastman                                    *
 * Contributors: Jack Middleton, Christopher Bruns, Paul Mitiguy              *
 *                                                                            *
 * Permission is hereby granted, free of charge, to any person obtaining a    *
 * copy of this software and associated documentation files (the "Software"), *
 * to deal in the Software without restriction, including without limitation  *
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,   *
 * and/or sell copies of the Software, and to permit persons to whom the      *
 * Software is furnished to do so, subject to the following conditions:       *
 *                                                                            *
 * This sentence, the above copyright and permission notices, and the         *
 * following disclaimer shall be included in all copies or substantial        *
 * portions of the Software.                                                  *
 *                                                                            *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR *
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,   *
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL    *
 * THE AUTHORS, CONTRIBUTORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,    *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR      *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE  *
 * USE OR OTHER DEALINGS IN THE SOFTWARE.                                     *
 * -------------------------------------------------------------------------- * 
@endverbatim

<h2>What's with that "TM" in Simbody&tm;?</h2>
That symbol is to let you know that we claim a trademark on the name "Simbody"
so you may not use that name except to refer to our software as we distribute
it. The license permits you to make any kind of derivative work, or to use
all or part of Simbody code in any way you like, but you can't call the
resulting work "Simbody" without our agreement. We make that restriction 
because we don't want any confusion to exist about what is, and what is not, 
the Simbody project that we are supporting. But ... if you want to make 
improvements to Simbody we would love to have your well-engineered, open source
contributions to put into the main Simbody source tree, in which case they 
\e would be included under the Simbody name.

<h2>How to acknowledge us</h2>
Our license does not \e require that you acknowledge us, but we and our 
sponsors would be grateful if you did anyway! If our hard work has helped you
with yours, please throw us a bone and mention on your "About" page and in
your documentation that you are using Simbody from 
https://simtk.org/home/simbody. Where appropriate, please cite this paper:

\par
Schmidt, J.P.; Delp, S.L.; Sherman, M.A.; Taylor, C.A.; Pande, V.S.; 
Altman, R.B. "The Simbios National Center: Systems Biology in Motion" 
<i>Proceedings of the IEEE</i> 96(8):1266-1280, 2008.

We would be particularly grateful if you mention that Simbody is primarily
funded by NIH Roadmap grant U54 GM072970. We appreciate that support very
much, and the NIH appreciates knowing that its funds are having an impact,
particularly on medical research and human health.
**/

#endif // SimTK_SIMBODY_DOXYGEN_MAINPAGE_H_
