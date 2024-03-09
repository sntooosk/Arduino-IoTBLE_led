import { Image, TouchableOpacity, View } from 'react-native';
import { style } from './styles';
import { useState } from 'react';

export default function Home() {

  let [toggle, setToggle] = useState(false);

  let handleChangeToggle = () =>{setToggle(oldToggle => !oldToggle)}

  return (
    <View style={toggle ? style.containerLight : style.container}>
        <TouchableOpacity onPress={handleChangeToggle}>
          <Image style={toggle ? style.lightinOn : style.lightinOff} source={
            toggle 
            ? require('../../assets/icons/eco-light.png')
            : require('../../assets/icons/eco-light-off.png') 
          }>
          </Image>  
        </TouchableOpacity>
      </View>

  );
}
