import { StyleSheet } from "react-native";

export const style = StyleSheet.create({
  container:{
    flex:1,
    backgroundColor: 'black',
    alignItems: 'center',
    justifyContent: 'center',
  },
  containerLight:{
    flex:1,
    backgroundColor: 'white',
    alignItems: 'center',
    justifyContent: 'center',
  },
  lightinOn:{
    resizeMode: 'contain',
    alignSelf: 'center',
    width: 150,
    height: 150,
  },
  lightinOff:{
    resizeMode: 'contain',
    alignSelf: 'center',
    tintColor: 'white',
    width: 150,
    height: 150,
  },
  imageOn:{
    resizeMode: 'contain',
    alignSelf: 'center',
    width: 300,
    height: 150,
    marginTop: 60,
  },
  imageOff:{
    resizeMode: 'contain',
    alignSelf: 'center',
    width: 300,
    lightinOn: 'white',
    height: 150,
    marginTop: 60,
  },

});