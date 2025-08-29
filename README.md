# musical-octo-fiesta
ue5 exploration: plugin collection of sensors and shaders

## Instructions to add the plugin to your ue project:
1. copy the folder(s) of the plugin(s) you want
2. paste the folder(s) into {your ue project}/Plugins/   (create the Plugins folder first if it doesnt exist)
3. try to open the project in unreal editor
4. if it says plugin not built for the correct ue version and auto rebuild fails:
  4.1. right click {your ue project}.uproject file in file explorer, then select generate visual studio project files
  4.2. open the solution in visual studio, open build > configuration manager, make sure Build is checked for UE5
  4.3. click build > rebuild solution
(not guaranteed to work bc i havent tested it myself)

## Plugins list
- **ThermalImaging**: 
  - postprocess material shader on camera. uses custom stencil values 0-255 to determine a mesh's temp.
  - remember to change project settings > Engine - rendering > postprocessing > custom depth-stencil pass: set to 'enabled with stencil'
  - drag BP_TemperatureManager into scene
  - on a camera, details > post process > rendering features > post process materials: add new array element, select M_ThermalPost
- **ThermalVision**: 
  - global shader with fake thermal filter (determined by pixel luminosity instead of temp)
- **NightVision**:
  - global shader with green filter and increased contrast
- **UE5_Tut_2_Custom_Shaders-no_helper**:
  - for reference only, tutorial code from https://github.com/RyanSweeney987/UE5_Tut_2_Custom_Shaders
- **a bunch of shadeup boilerplate shaders**:
  - empty boilerplates for different kinds of shader applications
