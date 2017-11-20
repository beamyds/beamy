{
  "interface_": {
    "operation": "SYSTEM",
    "portSpecifications": []
  },
  "blocks": [
    {
      "name": "Low Pass Filter1",
      "type": {
        "operation": "LOW_PASS_FILTER",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "IN",
            "xRatio": 0.0,
            "yRatio": 0.5,
            "simuNumber": 0
          },
          {
            "name": "2",
            "direction": "OUT",
            "xRatio": 1.0,
            "yRatio": 0.5,
            "simuNumber": 0
          }
        ]
      },
      "attributes": [
        {
          "name": "Coefficient",
          "type": "http://www.w3.org/2001/XMLSchema#double",
          "value": "1"
        }
      ],
      "x": -678.1328,
      "y": -512.0,
      "width": 60.0,
      "height": 40.0,
      "simuStartIndex": 0
    },
    {
      "name": "read_distance",
      "type": {
        "operation": "PORT_SYS_IN",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "OUT",
            "xRatio": 1.0,
            "yRatio": 0.5,
            "simuNumber": 0
          }
        ]
      },
      "attributes": [],
      "x": -909.1328,
      "y": -523.0,
      "width": 30.0,
      "height": 20.0,
      "simuStartIndex": 0
    }
  ],
  "ios": [
    {
      "name": "read_distance",
      "type": {
        "operation": "PORT_SYS_IN",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "OUT",
            "xRatio": 1.0,
            "yRatio": 0.5,
            "simuNumber": 0
          }
        ]
      },
      "attributes": [],
      "x": -909.1328,
      "y": -523.0,
      "width": 30.0,
      "height": 20.0,
      "simuStartIndex": 0
    },
    {
      "name": "screen_distance",
      "type": {
        "operation": "PORT_SYS_OUT",
        "portSpecifications": [
          {
            "name": "1",
            "direction": "IN",
            "xRatio": 0.0,
            "yRatio": 0.5,
            "simuNumber": 0
          }
        ]
      },
      "attributes": [],
      "x": 0.0,
      "y": 0.0,
      "width": 30.0,
      "height": 20.0,
      "simuStartIndex": 0
    }
  ],
  "connections": []
}